#include <stdio.h>
#include<limits.h>

/*Write a function rightrot(x,n) that returns the value of the integer x rotated to the right by n positions.*/

unsigned int rightrot(unsigned int x, int n)
{
    /*
        1.Toggle 0U to 1 (~0U)
        2.Create a mask by shifting the bits to right such that only n 1s are left (~0U>>(s-n))
        3.Extracting n bits from the right end using & operator (x&(~0U>>(s-n)))
        4.Shifting the extracted bits using left shift operator ((x&(~0U>>(s-n)))<<(s-n))
        5.Shifthing the bits of x by n position (x>>n)
        6.Replacing leftmost n bits of the result with the extracted rightmost bits of x using OR operator (x>>n)|((x&(~0U>>(s-n)))<<(s-n))
    */
    
    int s=sizeof(x)*CHAR_BIT;
    n=n%s;
    x=(x>>n)|((x&(~0U>>(s-n)))<<(s-n));
    
    return x;
}

int main()
{
    unsigned int x=253;
    int n=2;

    printf("The number %u after returning its value rotated to the right by %d positions in a 32-bit view is %u", x, n, rightrot(x,n));

    return 0;
}
