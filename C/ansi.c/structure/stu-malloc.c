#include<stdio.h>
#include<stdlib.h>
typedef struct student{
    char name[20];
    int reg;
}s;

s *fn(){
    s *s1;
    s1=(s*)malloc(2*sizeof(s));
    for (int i = 0; i < 2; i++)
    {
        printf("Enter name and registration number:");
        scanf("%s%d",(s1+i)->name,&(s1+i)->reg);
    }
    return s1;
}
int main()
{
s *sptr;
sptr=fn();
for (int i = 0; i < 2; i++)
{
    printf("%s\t%d",(sptr+i)->name,(sptr+i)->reg);
    printf("\n");
}
return 0;
}