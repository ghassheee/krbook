#include <stdio.h>

int main()
{
    char s[10];
    char *p = s;
    
    s[0] = 'a';
    s[1] = 'a';
    s[2] = 'a';
    s[3] = 'a';
    s[4] = 'a';
    s[5] = 'a';
    s[6] = '\n';
    s[7] = 'a';
    s[8] = 'a';
    s[9] = EOF;
    s[10] = 'b';
    s[11] = 'c';
    s[12] = 'd';
for (int i= 0;i<100;i++){
    

    printf("%s\n\n",p);
    p+=20;

}
    return 0;
}





