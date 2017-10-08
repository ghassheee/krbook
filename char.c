#include<stdio.h>

int main()
{
    for (int i = 0;i <256;++i)
    {
        printf("%3.0d:'%s'\n",i, (char * )(&i));
    }
    return 0;
}







