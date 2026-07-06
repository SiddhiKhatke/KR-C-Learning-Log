/*Exercise 3-1. Our binary search makes two tests inside the loop, when one would suffice (at
the price of more tests outside.) Write a version with only one test inside the loop.*/

#include <stdio.h>

int binsearch_opt(int x, int v[], int n)
{
    int low, high, mid;
    low=0;
    high=n-1;

    while(low<high)
    {
        mid=(low+high)/2;

        if(x<=v[mid])
        {
            high=mid;
        }

        else
        {
            low=mid+1;
        }
    }

    if(v[low]==x)
    {
        return low;
    }

    else
    {
        return -1;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int x=3;                             //target number
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("%d is present at index %d in the given array",x,binsearch_opt(x,arr,n));

    return 0;
}
