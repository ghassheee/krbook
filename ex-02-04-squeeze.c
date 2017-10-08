#include <stdio.h>
#include "squeeze.h"


int main(int argc , char **argv)
{
    if (argc != 3 || argv[1] == "--help" || argv[1] == "-h") {
        printf("\n$ squeeze s1 s2 :\n\n");
        printf("    arbitary character in string s2\n");
        printf("    is removed from string s1 .\n\n");
        return -1;
    }
    char* s = squeeze(argv[1],argv[2]);
    printf("%s\n",s);
    return 0;
}





