#include<stdio.h>

struct student{
    char name[20];
    int reg;
}s;

void display(struct student s){
    printf("name = %s\tregistration no. = %d\n",s.name,s.reg);

}
int main()
{
    printf("Enter the name and registration number of student:");
    scanf("%s%d",s.name,s.reg);
    display(s);
return 0;
}