#include<stdio.h>
int main()
{
    int amt,arr[11],den[11]={2000,1000,500,200,100,50,20,10,5,2,1},sum=0,rem;
    printf("Enter your amount in Indian currency:");
    scanf("%d",&amt);
    for (int i = 0; i <11; i++)
    {
        arr[i]=amt/den[i];
        amt=amt-arr[i]*den[i];
        
    }
    
    for (int i = 0; i < 11; i++)
    {
        sum=sum+arr[i];
    }
    printf("minimum number of denomination:%d",sum);
return 0;
}