#include<stdio.h>
int main()
{
    int a=0,b=1,temp=0,limit;
    printf("Enter the limit of febonacci sereis:");
    scanf("%d",&limit);
    printf("The fabonacci sereis is:\t");
    for (int i = 0; i < limit; i++)
    {
        a=temp;
        printf("%d\t",a);
        temp =b;
        b=a+b;
    }
    
return 0;
}