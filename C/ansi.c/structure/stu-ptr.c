#include<stdio.h>

struct student{
    char name[20];
    int reg;
}s1;

int main()
{
    struct student s2,*s2ptr;
    s2ptr=&s2;
    printf("Enter the name and reg:");
    scanf("%s%d",s1.name,&s1.reg);
    printf("Enter the name and reg:");
    scanf("%s%d",(*s2ptr).name,&(*s2ptr).reg);
    printf("%s\t%d\n",s1.name,s1.reg);
     printf("%s\t%d",(*s2ptr).name,(*s2ptr).reg);
     printf("\n%p",&(s1.name));

return 0;
}