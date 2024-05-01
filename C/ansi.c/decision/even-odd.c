#include<stdio.h>
int main()
{
    int x=2,y=3,z=5;
    printf("Enter the number:");
    scanf("%d",&x);
    if(x%2==0)
    printf("even");
    if(x%2!=0)
    printf("odd");
return 0;
}