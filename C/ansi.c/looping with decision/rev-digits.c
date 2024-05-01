#include<stdio.h>
int main()
{
    int num,rem=0,dec=1,rev=0;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("reverse number = ");
    while(num!=0){
        rem=num%10;
        num=num/10;
    printf("%d",rem);
    }
return 0;
}