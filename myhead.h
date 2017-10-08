#include <stdio.h>

#define MAIN() int main(int argc, char** argv)

#define REP(i,n) for(int i=0;i<(n);i++)

#define P(s) printf("s\n")

#ifndef __STRING__
#include <string.h>
#define __STRING__
#endif
#define HELP(n) \
    if ( \
        argc != n + 1 || \
        argc == 2 && \
        (strcmp(argv[1],"-h")==0 || strcmp(argv[1],"--help")==0)\
        )


