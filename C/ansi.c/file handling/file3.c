// append in file.
#include<stdio.h>
#include<stdlib.h>

struct student{
    char name[20];
    int reg;
}s[2];

int main()
{
    FILE *fptr=fopen("D:\\file.txt","w");
    
    for(int i=0;i<2;i++){
        printf("Enter name and reg:");
        scanf("%s%d",s[i].name,&s[i].reg);
        fprintf(fptr,"\t%s\t%d",s[i].name,s[i].reg);
    }
    fclose(fptr);
    return 0;
}