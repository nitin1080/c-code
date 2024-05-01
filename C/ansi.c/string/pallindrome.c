#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("Enter the string:");
    fgets(str,100,stdin);
    int n=strlen(str),a=0;
    printf("%d\n",n);
    for (int i = 0; i<n/2-1; i++)
    {
        if(str[i]==str[n-2-i]||str[i]+32==str[n-2-i]){
        a=1;
        }
        else
        a=0;
    }
    if(a==1)
    printf("String is palindrome.");
    else
    printf("String is not palindrome.");
    printf("\n%d",a);
    
return 0;
}