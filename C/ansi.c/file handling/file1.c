#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    int reg;
}s;

int main()
{
    FILE *fptr=fopen("D:\\stu.txt","w");
    if(fptr==NULL){
            printf("ERROR");
            exit(1);
    }
    printf("Enter name and reg.");
    scanf("%s%d",s.name,&s.reg);
    fprintf(fptr,"%s\t%d",s.name,s.reg);
    fclose(fptr);
return 0;
}