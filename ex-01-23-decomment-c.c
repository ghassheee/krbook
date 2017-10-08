#include <stdio.h>

#define OUT 0
#define IN  1
#define ON  1
#define OFF 0


int main (){


    int c,d;
    int quote;
    int comment;
    int onelineonly;

    quote = OUT;
    comment = OUT;
    onelineonly = OFF; 

    while ((c=getchar()) != EOF ){

        if (!comment && (c == '\'' || c == '"')) {
            putchar(c);
            while ( ( d = getchar()) != c && d != '\n'){
                putchar(d);
                if ( d == '\\' )
                    putchar(getchar());
            }
            putchar(d);
        }
        else if (c == '/'){ 
            
            d=getchar();
            
            if ( d == '/'){
                comment = IN;
                onelineonly = ON;
            }
            else if ( d == '*' ){
                comment = IN;
            }
            else if (!comment){
                putchar(c);
                putchar(d);
            }
        }

        else if ( c == '\n' &&  (comment && onelineonly)  ) {
            comment = OUT;
            onelineonly = OFF;
            putchar(c);
        }

        else if ( comment && c == '*'){ 
            
            d = getchar();
            
            if ( d == '/'){
                comment = OUT;
            }
        }

        else if (!comment){
            putchar(c);
        }
    }


    return 0;
}


