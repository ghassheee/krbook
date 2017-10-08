#include <stdio.h>
#include "lower.h"
#include <string.h>


char* lowerstring(char* a, char *c)
{
    for (int i=0;i<strlen(a);i++)
        c[i] = lower(a[i]);
    return c;

}

int main(int argc, char **argv)
{
    char c[1024];
    printf("%s\n" , lowerstring(argv[1],c));
    return 0;
}
