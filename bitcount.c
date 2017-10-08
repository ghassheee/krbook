#include <stdio.h>
#include "ex-2-9-bitcount.h"
#include "atoi.h"

int main (int argc, char **argv)
{
    printf("%d\n", bitcount(atoi(argv[1])));
    return 0;
}
