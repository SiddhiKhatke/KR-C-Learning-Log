#include <stdio.h>

/*returns x with the n bits that begin at position p set to the rightmost n bits of y, leaving the other bits unchanged*/
unsigned setbits(unsigned x,int p,int n,unsigned y)
{
    /*
    1.Creating a mask: ~(~0U << n)
    2.Shifting it to the targeted position: ~(~0U << n) << (p + 1 - n)
    3.Using the inverted mask to clear the targeted bits of x
    4.Extracting the rightmost n bits of y using AND operator: ((y & ~(~0U << n)) << (p + 1 - n))
    5.Putting the extracted bits into y using OR operator: x | ((y & ~(~0U << n)) << (p + 1 - n))
    */

    x &= ~(~(~0U << n) << (p + 1 - n));

    x |= ((y & ~(~0U << n)) << (p + 1- n));

    return x;
}

int main()
{
    unsigned x=210;
    int p=5;
    int n=3;
    unsigned y=321;
    printf("The number %u after returning it with the %d bits that begin at position %d set to the rightmost %d bits of %u, leaving the other bits unchanged is %u", x, n, p, n, y, setbits(x,p,n,y));

    return 0;
}

