#include "myhead.h"
#include "rot.h"
#include "x2x.h"

MAIN()
{
    HELP(2){}

    char s[N];
    printf("%s\n",
            itob(
                rightrot(
                    atoi(argv[1]),
                    atoi(argv[2])
                    ),
                s
            )
          );
    return 0;

}



