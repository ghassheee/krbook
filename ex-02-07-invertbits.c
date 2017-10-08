#include <stdio.h>
#include "help.h"
#include "invertbits.h"
#include "itob.h"
#include "atoi.h"

int main(int argc, char** argv)
{
    HELP(3){
        printf("\n$ invertbits X p n :\n");
        printf("    invert n bits at position p of X . \n");
        printf("\n");
        printf("$ invertbits 1023 5 2 \n");
        printf("0111100111 \n");
        printf("\n");
        return -1;
    }

    char s[N];
    printf("%s\n",
            itob(
                invert(
                    atoi(argv[1]),
                    atoi(argv[2]),
                    atoi(argv[3])
                    ),
                &s
                )
            );
            return 0;
}
