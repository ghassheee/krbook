#include <stdio.h>

#define MAXSIZE 1024

void reverse(char from[], char to[], int len);
int getlin(char[], int);


int main(int argc, char ** argv)
{
    char line[MAXSIZE];
    char reversedline[MAXSIZE];
    int len=1;
    while ((len = getlin(line, MAXSIZE ))>0){
        reverse(line, reversedline, len);
        printf("%s",reversedline);
    }

    return 0;

}
    

void reverse(char from[], char to[], int len )
{
    int i=0;
    while (i<len)
    {
        to[i] = from[len - i - 1];
        ++i;
    }
    to[len] = '\0';
}

int getlin(char s[], int m)
{
    int c,i;
    i = 0;
    while ((c = getchar()) != EOF && c != '\n' && m-1 > i ) 
    {
        s[i] = c;
        ++i;
    }
    if (c == '\n')  s[i++] = c;
    
    s[i] = '\0';

    return i;
}
        
    


