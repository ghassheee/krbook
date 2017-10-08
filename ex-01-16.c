/* 
 * this program 
 * displays
 *
 * how long line is
 *
 * &
 *
 * the longest line
 */



#include <stdio.h>

#define MAXLINE 1000


int getline1(char[], int);
void copy(char to[], char from[]);

int main()
{
    int len;
    int max ;
    char line[MAXLINE];
    char longest[MAXLINE];
    
    max = 0;
    while ((len = getline1(line,MAXLINE))>0)
    {
        if (len > max)
        { 
            max = len;
            copy( longest, line );
        }
        printf("len =%4d : %s",len,line);


    }

    printf("longest =%4d : %s" ,max, longest);

    return 0;
}





int getline1(char s[], int lim)
{

    int c,i;
    
    i = 0;
    while (i<lim-1 && (c = getchar()) != EOF && c != '\n')
    {
        s[i++] = c;
    }
    
    if (c == '\n') 
    {
        s[i++] = c ;
    }
    
    s[i] = '\0';
    return i;
}

void copy(char to[] , char from[])
{
    int i=0;
    while((to[i] = from[i]) != '\0')++i;
}

