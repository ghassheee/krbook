#include <stdio.h>

#define LIMIT 1000

char s[LIMIT];
int i,c;


int main(){

    /* ORIGINAL */
    
    
    /* 
     * for (i=0;i<LIMIT-1 && (c=getchar()) != `\n` && c != EOF ; ++i)
     * s[i] = c;
     *
     */



    /* DEVELOP */


    enum loop {YES,NO};
    enum loop looping = YES;

    i = 0;
    while (looping == YES){

        c = getchar();
        if      (i<LIMIT-1) looping = YES;
        if (c == '\n') looping = NO;
        if (c == EOF ) looping = NO;
        s[i++] = c;
    }

    printf("%s\n",s);


    return 0;


}

