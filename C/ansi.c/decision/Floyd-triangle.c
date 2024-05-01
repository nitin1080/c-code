#include<stdio.h>
int main()
{
    int row,k=1;
    printf("Enter the number of row:");
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 1; j <=1+i; j++)
        {
            printf("%d\t",k);
         k++;
        }
       printf("\n");
    }
    
return 0;
}