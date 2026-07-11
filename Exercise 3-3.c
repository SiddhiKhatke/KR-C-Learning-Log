#include <stdio.h>
#include <ctype.h>

#define MAXLINE 1000

void expand(char s1[],char s2[]);

int main()
{
    char s1[MAXLINE]="This is a string to test the program a-z also handles cases like a-b-c and a-z0-9 and -a-z and a-z-\n\n";
    char s2[MAXLINE];

    printf("The original text:\n%s",s1);
    expand(s1,s2);
    printf("The expanded text is:\n%s",s2);

    return 0;
}

void expand(char s1[],char s2[])
{
    int i=0;
    int j=0;
    int k=0;
    int start,end;

    while(s1[i]!='\0')
    {
        if((s1[i]=='-')&& (isalnum(s1[i-1])) && (isalnum(s1[i+1])))
        {
            start=s1[i-1];
            end=s1[i+1];

            for(k=start+1; k<=end; k++)
            {
                s2[j]=k;
                j++;
            }
            i+=2;
        }

        else
        {
            s2[j++]=s1[i++];
        }
    }

    s2[j]='\0';

}
