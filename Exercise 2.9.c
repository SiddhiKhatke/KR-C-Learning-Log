#include <stdio.h>

int bitcount (unsigned x);

int main()
{
    unsigned num=0b100101;

    printf("The number of 1s in the binary number are %d",bitcount(num));
}

int bitcount(unsigned x)
{
    int count=0;

    while(x!=0)
    {
        x&=(x-1);
        count++;
    }
    return count;
}

/*This logic is more efficient because it skips all the zeros and loops only as many times
 as there are 1s in the number, whereas the traditional method must loop through every single bit regardless of its value.*/
