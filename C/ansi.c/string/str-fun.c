#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char first[3][20],second[3][20],last[3][20],temp[20],name[3][20];
    printf("Enter the first,second and last name:");
    for (int i = 0; i < 3; i++)
    {
        scanf("%s%s%s",first[i],second[i],last[i]);
        strcpy(name[i],last[i]);
        strcat(name[i],",");
        strncat(name[i],first[i],1);
        strcat(name[i],".");
        strncat(name[i],second[i],1);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%s\n",name[i]);
    }
    
    
return 0;
}