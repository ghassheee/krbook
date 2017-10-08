/* htoi.h
 * hexadecimal ---> decimal int
 */


#define YES 1
#define NO  0

int htoi(char s[]){


    if (s[0] == '0'){
        if (s[1] == 'x');
        else if (s[1] == 'X');
        else return 0;
    }
    else return 0;

    int inhex;
    int n=0;
    int i;
    inhex = YES;
    for (i=2 ; inhex==YES ; ++i){
        if (s[i] >='0' && s[i] <= '9'){
            n = n*16 + s[i]-'0';
        }
        else if (s[i] >= 'a' && s[i] <= 'f'){
            n = n*16 + s[i] - 'a' + 10 ;
        }
        else if (s[i] >= 'A' && s[i] <= 'F'){
            n = n*16 + s[i] - 'A' + 10;
        }
        else inhex = NO;
    }


    return n;
}

