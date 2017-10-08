#include <stdio.h>
#include <stdlib.h>


int main(){

    printf("signed  \tchar \tmax\t=%22d\n",SCHAR_MAX);
    printf("signed  \tchar \tmin\t=%22d\n",SCHAR_MIN);
    printf("signed  \tshort\tmax\t=%22d\n",SHRT_MAX);
    printf("signed  \tshort\tmin\t=%22d\n",SHRT_MIN);
    printf("signed  \tint  \tmax\t=%22d\n",INT_MAX);
    printf("signed  \tint  \tmin\t=%22d\n",INT_MIN);
    printf("signed  \tlong \tmax\t=%22ld\n",LONG_MAX);
    printf("signed  \tlong \tmin\t=%22ld\n",LONG_MIN);
    printf("unsigned\tchar \tmax\t=%22u\n",UCHAR_MAX);
    printf("unsigned\tshort\tmax\t=%22u\n",USHRT_MAX);
    printf("unsigned\tint  \tmax\t=%22lu\n",UINT_MAX);
    printf("unsigned\tlong \tmax\t=%22lu\n",ULONG_MAX);

    return 0;
}





