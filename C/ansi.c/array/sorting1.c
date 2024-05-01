#include<stdio.h>
int main()
{
    int arr[5]={7,4,9,8,2};
    int temp,x=0;
    for (int i = 4; i >= 0; i--)
    {
        for (int j = 0; j < 5-x; j++)
        {
            if(arr[i]<arr[j]){
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;}
            else
            continue;
        }
        x++;
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
return 0;
}