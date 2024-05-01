#include<stdio.h>
int main()
{
    char str[]="I am Nitin Singh.";
    for (int i = 0; str[i] != '\0'; i++)
    {
        if(str[i]==32)
        printf("  ");
        printf("%c",str[i]);
    }
    
return 0;
}