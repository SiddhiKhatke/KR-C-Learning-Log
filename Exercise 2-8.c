#include <stdio.h>
#include<limits.h>

/*Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions.*/

unsigned int rightrot(unsigned int x, int n)
{
    int s=sizeof(x)*CHAR_BIT;
    n=n%s;
    x=(x>>n)|(x&(~0U>>(s-n)))<<(s-n);
            /*(x&(~0U>>(s-n)))<<(s-n)*/

    return x;
}

int main()
{
    unsigned int x=253;
    int n=2;

    printf("The number %u after returning its value rotated to the right by %d positions in a 32-bit view is %u", x, n, rightrot(x,n));

    return 0;
}
