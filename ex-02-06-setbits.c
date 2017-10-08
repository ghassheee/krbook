#include <stdio.h>
#include "setbits.h"
#include "atoi.h"
#include "itob.h"
#include "help.h"


int main(int argc, char** argv)
{   

    HELP(4)
    {
        printf("\n$ setbits X p n Y \n");
        printf("    Y's lowest n bits \n");
        printf("    will be embedded into\n");
        printf("    X @ position p .\n\n");
        return -1;
    }

    char s[N];
    
    //printf("%s\n", itob(32,&s));
    
    printf("%s\n",
            itob(
                (signed int)setbits(
                    atoi(argv[1]),
                    atoi(argv[2]),
                    atoi(argv[3]),
                    atoi(argv[4])
                    ),
                &s)
            );

    return 0;
}


