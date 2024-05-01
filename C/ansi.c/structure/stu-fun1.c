#include<stdio.h>

struct student{
    char name[20];
    int reg;
}s;

struct student fn(){
    printf("Enter the name and registration number:");
    fgets(s.name,20,stdin);
    scanf("%d",&s.reg);
    return s;
}

int main()
{
    struct student st;
    st=fn();
    printf("%s%d",st.name,st.reg);
return 0;
}