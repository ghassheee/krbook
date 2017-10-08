#include <stdio.h>

#define MAXCOL 32 
#define TABINC 8


char line[MAXCOL];

int expandtab(int pos);
int findblank(int pos);        
int newpos(int pos);           /* line[0...]  <- line[pos ~ MAXCOL-1] */ 
void println(int pos);  /* print line[0] ~ line[pos]*/


int main(){

    int c, pos;
    pos = 0;

    while ((c = getchar()) != EOF ){
        
        line[pos] = c;


        if (c == '\t') {
            pos = expandtab(pos);
            if (pos >= MAXCOL) {
                println(pos);
                pos = 0;
            }
        }


        else if (c == '\n') {
            println(pos);
            pos = 0;
        }

        else if (++pos >= MAXCOL){
            pos = findblank(pos);
            println(pos);
            pos = newpos(pos);

        }
    }
    return 0;
}

int expandtab(int pos){
    while ((TABINC - (pos)%TABINC) > 0){
        line[pos++] = ' ';
    }
    return pos;
}


void println(int pos){
   
    for ( int i=0 ; i< pos;++i){
        putchar(line[i]);
    }
    putchar('\n');
}


int findblank(int pos){
    int i = pos;
    while ( i>0 ){
        if (line[--i] ==' ') return ++i;
    }
    return pos;
}

int newpos(int pos){
    int i = 0;
    while(pos <MAXCOL){
        line[i++] = line[pos++];
    }
    return i;
}


