#include <stdio.h>
#include "itob.h"
#include "atoi.h"

int main(int argc, char** argv)
{
    char s[N];
    printf("%s\n",itob(atoi(argv[1]),&s));
    return 0;
}
