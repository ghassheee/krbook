unsigned int setbits( unsigned int x , int p , int n , unsigned int y )
{
    return (x & ~( ~(~0<<n) << (p-n) ) ) | 
           ( ( y & ~(~0<<n) ) << (p-n) );


// x          10110101
// y          00001111
// 
// ~0         11111111
// ~0<<n      11111000
// ~(~0<<n)   00000111


}
