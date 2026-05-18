#include <stdio.h>

/*Exercise 2-3: Write a function htoi(s), which converts a string of hexadecimal digits
(including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0
through 9, a through f, and A through F. */

int htoi(char s[])
{
    int i=0;
    int result=0;

    if(s[0]=='0' && (s[1]=='x' || s[1]=='X'))
    {
        i=2;
    }

    while(s[i]!='\0')
    {
        int digit_value=0;

        if(s[i]>='1' && s[i]<='9')
        {
            digit_value=s[i]-'0';
        }

        else if(s[i]>='a' && s[i]<='f')
        {
            digit_value=s[i]-'a'+10;
        }

        else if(s[i]>='A' && s[i]<='F')
        {
            digit_value=s[i]-'A'+10;
        }

        else
        {
            break;
        }

        result=(result*16)+digit_value;
        i++;
    }

    return result;
}

int main()
{
    char test1[]="0x1af";
    char test2[]="0x1d";
    char test3[]="0x5f";
    char test4[]="0x14b";

    printf("Hexadecimal:%s\tDecimal:%d\n",test1,htoi(test1));
    printf("Hexadecimal:%s\tDecimal:%d\n",test2,htoi(test2));
    printf("Hexadecimal:%s\tDecimal:%d\n",test3,htoi(test3));
    printf("Hexadecimal:%s\tDecimal:%d\n",test4,htoi(test4));

    return 0;
}
