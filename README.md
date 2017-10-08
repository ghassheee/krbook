# Kernighan Ritchie Book

this is a repository for exercises of  
`
" Kernighan & Ritchie C programming "
`

if you are a beginner of UNIX programming,  
I recommend you to buy this book and make your bin !  
The youger you are , the more I recommend ,   
such a nice book .  


<br><hr><br>

# some memo  

## 2 data type , operator , expression

### 2.11 condition

`````
(n>0) ? f : n
`````

here,

f is `float`  
n is `int`

then returns `float`


<br><br>

e.g.

`````
for (i=0;i<n;i++)
    printf("%6d%c", a[i], (i%10==9 ? '\n' : ' ');

printf("\n");
`````


e.g. "s" of third person singular present

`````
printf(" You have %d item%s.\n", n , n==1 ? "" : "s" );
`````




| operator | association rule |
| --- | --- |
| ()   []   ->   . | left |
| ! ~ ++ -- + * & (type) sizeof | right | 
| *   /    % | left | 
| +   -   | left |
| <<  >>  | left | 
| <   <=   >   >= | left |
| ==   !=  | left |
| & | left |
| ^ | left |
| \| | left |
| && | left |
| \|\| | left |
| ?: | right |
| = += -= \*= /= %= &= ^= \|= <<= >>= | right |
| , | left |



* the evaluation order of operands are not defined by c .
* the evaluation order of arguments are not defined by c .
* the evaluation order of like `a[i]=i++;` are not defined by c.



<br><hr><br>


## 3 control flow

### 

{} : complex sentence , several statements , block 

````
if (expr)
    for (expr;expr;expr)
        if (expr)
            stmt;
else                     //this is mistaten
    stmt;
````





