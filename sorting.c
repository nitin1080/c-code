#include<stdio.h>
int main()
{
    int arr[10],x=0;
    printf("Enter 10 elements in the array:");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j+i < 10; j++)
        {
            if(arr[i]>arr[j+i]){
                x=arr[i];
                arr[i]=arr[j+i];
                arr[j+i]=x;
            }
            else
            continue;
        }
       
    }
    printf("array after sorting:\t");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
return 0;
}