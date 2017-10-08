#include <stdio.h>

#define n 3


int main(void)
{
    printf("\ta\naaaaaaaaaaaa\n");
    //int a = EOF;
    //putchar(a);
    int c;
    while((c = getchar()) != EOF )
    {
        if (c == ' ') putchar('t');
        else putchar('f');
    }


    printf("kaigyo\n");
    return 0;




}



