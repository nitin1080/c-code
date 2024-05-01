#include<stdio.h>
int main()
{
    printf("Enter the number in the form of number as ymd:");
    int date;
    scanf("%d",&date);
    printf("DATE: %d\n",date%100);
    printf("MONTH: %d\n",(date%10000)/100);
    printf("YEAR: %d",date/10000);
return 0;
}