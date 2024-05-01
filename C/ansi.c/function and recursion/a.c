#include<stdio.h>
#include<string.h>
int main()
{
    char str1[10]="nitin",str2[10]="singh",*ptr;
    ptr=str2;
    printf("%d\n",strlen(str1));
    for (int i = 0; i < strlen(str2)+strlen(str1); i++)
    {
        if(i<5);
        printf("%c",str1[i]);
        if(i>4)
        printf("%c",str2[i-strlen(str1)]);
    }
return 0;
}