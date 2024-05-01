#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int a=0, b=0, p=0;
    printf("Enter the string:");
    fgets(str,100,stdin);
    int c=(strlen(str)-1);
    for (int i = 0; i < c; i++)
    {
        if (str[i]==32)
        {
            a++;
        }
        if (str[c-i-1]==32)
        {
           b++;
        }
        if (str[i+a]!=str[c-i-b-1])
        {
            p++;
            break;
        }
        if ((i+a)==c/2)
        {
            break;
        }
    }
    if (p==0)
    {
       printf("pelindrome");
    }
    else
       printf("not pelindrome");

}