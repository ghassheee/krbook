#include <stdio.h>
#include <string.h>

    
int paren, bracket, brace;

void in_quote(int c);
void in_comment();
void search(int c);




int main(int argc, char** argv){
    
    if (argc != 1 || argc == 2 && 
            (strcmp(argv[1],"-h")==0 || strcmp(argv[1],"--help")==0) ){
        printf("\n1. Input SourceCode of Program\n");
        printf("   as standard input\n");
        printf("2. If the code is wrong , \n");
        printf("   you will get how it is wrong parenthesed.\n\n");
        return -1;
    }


    int c,d;
    extern int paren , bracket, brace;

    while ((c = getchar()) != EOF){

        if (c == '/') {
            d = getchar();

            if(d == '*'){
                in_comment();
            }
            else {
                search(c);
            }
        }
        else if (c == '\'' || c == '"' ){
            in_quote(c);

        }
        else {
            search(c);
        }


        if (paren<0){
            printf("Unbalanced parentheses\n");
            paren = 0;
        }
        if (bracket<0){
            printf("Unbalanced brackets\n");
            bracket = 0;
        }
        if (brace<0){
            printf("Unbalanced braces\n");
            brace = 0;
        }
    }


        if (paren>0){
            printf("Unbalanced parentheses+\n");
            paren = 0;
        }
        if (bracket>0){
            printf("Unbalanced brackets+\n");
            bracket = 0;
        }
        if (brace>0){
            printf("Unbalanced braces+\n");
            brace = 0;
        }


    return 0;
}


void search(int c){
    if      (c == '{') ++brace;
    else if (c == '}') --brace;
    else if (c == '[') ++bracket;
    else if (c == ']') --bracket;
    else if (c == '(') ++paren;
    else if (c == ')') --paren;
}


void in_comment(){
    int c, d;
    c = getchar();
    d = getchar();

    while ( c != '*' || d != '/' ) {
        c = d;
        d = getchar();
    }
}


void in_quote(int c){
    int d ;
    while (( d = getchar()) != c ) {
        if ( d == '\\' )
            d = getchar();
    }
}







