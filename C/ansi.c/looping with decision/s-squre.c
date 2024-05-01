#include<stdio.h>
int main()
{
    int row;
    printf("Enter the number of row:");
    scanf("%d",&row);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            if(i==0||i==row-1||j==0||j==row-1)
            printf("S  ");
            else
            printf("   ");
        }
        printf("\n");
    }
    
return 0;
}