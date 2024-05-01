#include<stdio.h>

struct student{
    char name[20];
    int reg;
}s[3];

struct student *fn(){
    for(int i=0;i<3;i++){
    printf("Enter the name and registration number:");
    scanf("%d%s",&s[i].reg,s[i].name);
    }
    return s;
}

int main()
{
    struct student *sptr;
    sptr=fn();
    for(int i=0;i<3;i++){
    printf("%s\t%d",(sptr+i)->name,(sptr+i)->reg);
    printf("\n");
    }
return 0;
}