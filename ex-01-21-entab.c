#include <stdio.h>

#define TABINC 8

int main(){

    int nb , c , pos ;
    pos = 1;
    nb = 0;

    while( (c = getchar()) != EOF ) {

        if (c==' '){
            if (!(pos % TABINC)&&nb>0){ /* if pos = 8,16,24,...*/
                putchar('\t');
                nb = 0;
                pos += TABINC -( nb + 1 )%TABINC;
            }else {
                ++nb;
                ++pos;
            }
        
        } 
        else if (c=='\t'){
            putchar(c);
            nb = 0;
            pos += TABINC -(nb + 1)%TABINC ;

        }else if (c=='\n'){
            putchar(c);
            nb = 0;
            pos = 1;
        
        } else {
            while (nb > 0){
                putchar(' ');
                --nb;
            }
            putchar(c);
            ++pos;
        }
    }

    return 0;
}

