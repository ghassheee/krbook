#include <stdio.h>
#include "getbits.h"
#include "atoi.h"
#include "itob.h"
#include "help.h"


int main(int argc, char** argv)
{
    HELP(3){
        printf("\n$ getbits X p n : \n");
        printf("    extract n bits from at position p of X \n");
        printf("\n");
        return -1;
    }

    char s[N];
    printf("%s\n", itob(32,s));
    int q = (signed int)getbits(atoi(argv[1]),atoi(argv[2]),atoi(argv[3]));
    printf("%s\n",itob((signed int)getbits(atoi(argv[1]),atoi(argv[2]),atoi(argv[3])),s));

    return 0;
}

