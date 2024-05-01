#include<stdio.h>
int main()
{
    int *arr[3],array[3];
    arr[0]=&array;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the number:");
        scanf("%d",&array[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%u\n",*(arr[0]+i),(arr[0]+i));
    }
    
return 0;
}