/*returns x with the n bits that begin at position p inverted (i.e., 1 changed into 0 and vice versa), leaving the others unchanged.*/
unsigned invert(unsigned int x, int p, int n)
{
    /*
    1.Creating a mask (~0U<<n)
    2.Invert it (~(~0U<<n)), now we have only n 1s
    3.Left shift to the targeted position ((~(~0U<<n))<<p+1-n)
    4.Toggle the targeted bits using XOR operator and update the value of n
    */

    x^=((~(~0U<<n))<<(p+1-n));

    return x;
}

int main()
{
    unsigned int x=345;
    int p=4;
    int n=3;

    printf("The integer after returning %u with %d bits that begin at position %d inverted, leaving the others unchanged is %u",x, n, p, invert(x,p,n));

    return 0;

}
