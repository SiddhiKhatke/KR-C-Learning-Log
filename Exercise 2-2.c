#include <stdio.h>

#define lim 100

int main()
{
    int i=0;
    int c;
    char s[lim];

    while(i<lim-1)
    {
        c=getchar();

        if(c=='\n')
            break;

        if(c==EOF)
            break;

        s[i]=c;
        i++;
    }

    s[i]='\0';

    printf("Input string:%s\n",s);

    return 0;
}
