/* 
 * getbits: 
 *   pの位置からn bit を取ってくる
 *
 * getbits( 01100010, 7,3) -> 110
 */


unsigned int getbits(unsigned int x , int p , int n )

{
    return (x >> (p-n)) & ~(~0 << n) ;
}






