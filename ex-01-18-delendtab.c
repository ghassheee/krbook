/*
 * this program 
 * removes
 *
 * 1.  ' ' & tabs 
 *     at the end of line 
 *
 * 2.  no character line
 *
 */


#include <stdio.h>

#define OUT 0
#define IN 1
#define MAX 1000
#define ON 1
#define OFF 0

int main()
{    
    int state;
    int i,c;
    char tmp[MAX];
    int nochar;

    nochar = ON;
    state = OUT;

    while((c = getchar()) != EOF)
    {
        if(c == '\n')
        {
            if (state != IN )
                i = 0;
            if (nochar != ON)
            {
                //printf("\\n");
                putchar(c);
                nochar = ON;
            }
            else
            {
                i = 0;
                state = OUT;
            }
        }
        else if (c == ' ' || c == '\t' )
        {
            if (state == IN) i = 0;
            state = OUT;
            tmp[i++] = c;
        }
        else if (state == OUT)
        {
            nochar = OFF;
            state = IN;
            tmp[i] = '\0';
            printf("%s",tmp);
            putchar(c);
        }
        else
        {
            putchar(c);
        }
    }
    printf("\n");
    return 0;
}
