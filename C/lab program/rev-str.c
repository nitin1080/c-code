#include<stdio.h>
int main()
{
    char str[20],temp,len=0;
    printf("Enter the string:");
    fgets(str,sizeof(str),stdin);
    for (int i = 0; str[i] != '\0'; i++)
    {
        len=len+1;
    }
    printf("%d\n",len);
    for (int i = 0; i < (len-1)/2; i++)
    {
        temp=str[i];
        str[i]=str[len-i-2];
        str[len-i-2]=temp;
    }
    printf("The reversed string is:%s",str);
return 0;
}