#include<stdio.h>

struct student{
    char name[20];
    int reg;
}s[3];

int main()
{
    printf("Enter the name and reg.:");
    for(int i=0;i<3;i++){
    scanf("%s%d",s[i].name,&s[i].reg);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("name = %s\tregistration no. = %d\n",s[i].name,s[i].reg);
    }
    
return 0;
}