
#define N 32
char* itob(int c,char* s)
{
    s[N]='\0';
    int bi[2]; bi[0]='0';bi[1]='1';
    int i;
    int n=1;
    for(i=0;i<N;i++){
        s[N-1-i] = bi[(c&n) != 0];
        n *= 2;
    }
    s[N-1-i]=bi[1];
    return s;
}
