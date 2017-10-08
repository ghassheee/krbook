#include <stdio.h>

int main(){

    printf("signed  \tchar \tmax\t=%22d\n",(char)((unsigned char) ~0 >>1));
    printf("signed  \tchar \tmin\t=%22d\n",(char)~((unsigned char) ~0 >>1));
    printf("signed  \tshort\tmax\t=%22d\n",(short)((unsigned short) ~0 >>1));
    printf("signed  \tshort\tmin\t=%22d\n",(short)~((unsigned short) ~0 >>1));
    printf("signed  \tint  \tmax\t=%22d\n",(int)((unsigned int) ~0>>1));
    printf("signed  \tint  \tmin\t=%22d\n",(int)~((unsigned int) ~0>>1));
    printf("signed  \tlong \tmax\t=%22ld\n",(long)((unsigned long) ~0>>1));
    printf("signed  \tlong \tmin\t=%22ld\n",(long)~((unsigned long) ~0>>1));
    printf("unsigned\tchar \tmax\t=%22u\n",(unsigned char) ~0);
    printf("unsigned\tshort\tmax\t=%22u\n",(unsigned short) ~0);
    printf("unsigned\tint  \tmax\t=%22lu\n",(unsigned int) ~0);
    printf("unsigned\tlong \tmax\t=%22lu\n",(unsigned long) ~0);

    return 0;
}





