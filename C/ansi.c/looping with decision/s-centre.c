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
            if(i==row/2&&j==row/2)
            printf("# ");
            else
            printf("* ");
        }
        printf("\n");
    }
    
return 0;
}