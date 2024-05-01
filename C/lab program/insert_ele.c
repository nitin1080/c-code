#include<stdio.h>
int main()
{
    int size=5,pos;
    // printf("Enter the size of the array:");
    // scanf("%d",&size);
    int arr[]={7,5,3,8,9};
    printf("Enter the position to add element:");
    scanf("%d",&pos);
   
     
   
    printf("Enter the element:");
    scanf("%d",&arr[pos-1]);
    for (int i = 0; i <= size; i++)
    {
        printf("%d\t",arr[i]);
    }
    
return 0;
}