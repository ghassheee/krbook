/* lower.h
 * 'A'...'Z' -> 'a'...'z'
 */


int lower2(int c)
{
    if (c >= 'A' && c<= 'Z')
        return c + 'a' -'A';
    else return c;
}



int lower(int c)
{
    return (c >= 'A' && c<= 'Z') ? (c + 'a' - 'A') : c; 
}
