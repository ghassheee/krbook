#include <stdio.h>




#define TABINC 8 /* tab increment size */

int main()
{
    int c ,nb, pos;

    nb = 0;     /* number of blanks */
    pos = 1;    /* position of character in line */
    while ((c=getchar()) != EOF) {
        
        if (c == '\t'){
            nb = TABINC - (pos - 1)%TABINC; 
            /* tab increment always move to (n*TABINC) position 
             * whichever position is 1, 2, 3,...,8 
             * ,TAB make it moves to position 9        */
            while (nb > 0){
                putchar(' ');
                --nb;
                ++pos;
            }
        }
        else if (c == '\n'){
            putchar(c);
            pos = 1;
        }
        else {
            putchar(c);
            ++pos;
        }
    }
    return 0;
}


