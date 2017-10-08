unsigned rightrot(unsigned x , int n)
{
   
    int i;
    unsigned u = ~((unsigned) 0);
    for (i=0;(u=u>>1)>0;i++) ;
    return  ((x & ((~0>>n)<<n)) >> n) |
         (x&~(~0<<n)) << (i+1-n);

// x            10110111
// n            3
//
// ~(~0<<n)     00000111
// ~(~0>>n)     11100000
// ~0>>n        00011111
// (~0>>n)<<n   11111000
}

unsigned leftrot()
{
    

}



