#include<stdio.h>
int main()
{
    int row;
    printf("Enter the number of row:");
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if((i+j)%2==0)
            printf("1\t");
            else
            printf("0\t");
        }
        printf("\n");
    }
    
return 0;
}