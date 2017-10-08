#include <stdio.h>
#define REP(k,n) for(int i=(k);i<(n);i++)


FILE *fp;
unsigned char buf[16];
unsigned long addr = 0;
int num,i;


int usage(){
    printf("usage : \n  $ dump filename \n");
    return 1;
}
int fpErr(){
    printf("!!! cannot open file !!!\n");
    return 1;
}


void printbytes()
{
    num = fread(buf,1,16,fp);
    REP(0,num){
        if (i==8) printf(" ");
        printf("%02X ",buf[i]);
    }
    REP(num,16){
        if (i==8) printf(" ");
        printf("   ");
    }
}
void printchar()
{
    REP(0,num) printf("%c",(32<=buf[i]&&buf[i]<=126) ? buf[i] : '.');
}



int main(int argc,char** argv)
{

    if (argc <= 1) return usage();
    if (!(fp=fopen(argv[1],"rb")))return fpErr();

    while(1){
        printf("%08lX  ",addr);
        printbytes();
        printchar();
        printf("\n");
        addr += 16;
        if(feof(fp)) break;
    }

    fclose(fp);
    return 0;
}


