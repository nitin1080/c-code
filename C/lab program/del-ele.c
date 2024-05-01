#include<stdio.h>
int main()
{
    int size,pos;
    printf("Enter the size of element:");
    scanf("%d",&size);
    int arr[size];
    printf("\nEnter the element in array:\t");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter the position to delete:\t");
    scanf("%d",&pos);
    for (int i = pos-1; i < size; i++)
    {
        arr[i]=arr[i+1];
    }
    for (int i = 0; i < size-1; i++)
    {
       printf("%d\n",arr[i]);
    }printf("\n%d",sizeof(arr));
return 0;
}