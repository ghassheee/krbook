#include <stdio.h>

int main ()
{
    int c ;
    while (c)
    {
        printf("%d\n", c );
        c = getchar() != EOF;
    }
    return 0;
}

