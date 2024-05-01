#include<stdio.h>

typedef struct student{
    char name[20];
    int reg;
}s1;

void display(struct student s1[4]){
    for(int i=0;i<4;i++){
    printf("name = %s\tregistration no. = %d\n",s1[i].name,s1[i].reg);
    }
}
int main()
{
     s1 s[4];
     for(int i=0;i<4;i++){
    printf("Enter the name and registration number of student:");
    scanf("%s%d",s[i].name,&s[i].reg);
     }
    display(s);
return 0;
}