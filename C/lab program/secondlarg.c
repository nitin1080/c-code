#include<stdio.h>
int main()
{
     int size,max=0,smax=0;
    printf("Enter the size of element:");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the element in array:\t");
    for (int i = 0; i < size; i++)
    {
        scanf("%d\n",&arr[i]);
    }
    for (int i = 0; i < size; i++)
    {
        max=(arr[i]>max)?arr[i]:max;
    }
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==max){
            continue;
        }
        
        smax=(arr[i]>smax)?arr[i]:smax;
    }
      printf("Second largest element is:%d",smax);
return 0;
}