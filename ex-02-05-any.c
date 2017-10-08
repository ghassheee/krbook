#include <stdio.h>
#include "any.h"


int main(int argc , char **argv)
{
    if (argc != 3 || argv[1] == "--help" || argv[1] == "-h") {
        printf("\n$ any s1 s2 :\n\n");
        printf("    if arbitary character in string s2\n");
        printf("    is equal to some char of string s1 ,\n");
        printf("    return the position of the firstest one .\n\n");
        return -1;
    }
    int i = any(argv[1],argv[2]);
    printf("%d\n",i);
    return 0;
}





