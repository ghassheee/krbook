#include <stdio.h>


/*
 * octo
 */

//#define VTAB '\013'
//#define BELL '\007'



/*
 * hexadecimal
 *
 * #define VTAB '\xb'
 * #define BELL '\x7'
 * 
 */


enum boolean{ NO, YES };
enum escapes
{ 
    BELL        = '\a',
    BACKSPACE   = '\b',
    TAB         = '\t',
    NEWLINE     = '\n',
    VTAB        = '\v',
    RETURN      = '\r'
};






int main(){



    printf("\nbell\txx\\ayy\n");  //BELL 
    printf("null\txx\\0yy\n");  
    printf("back\txx\\byy\n");
    printf("return\txx\\nzz\n");
    printf("restore\txx\\ryy\n");   //GOTO head of line
    printf("tab\txx\\tyy\n");
    printf("vtav\txx\\vyy\n\r\r\n");




    printf("bell\txx%cyy\n",'\a');  //BELL 
    printf("null\txx%cyy\n",'\0');  
    printf("back\txx%cyy\n",'\b');
    printf("return\txx%czz\n",'\n');
    printf("restore\txx%cyy\n",'\r');   //GOTO head of line
    printf("tab\txx%cyy\n",'\t');
    printf("vtav\txx%cyy\n\r\r\n\n",'\v');

    return 0;
}

