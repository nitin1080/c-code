#include<stdio.h>
int main()
{
    int row;
    printf("Enter the row of triangle:");
    scanf("%d",&row);
    printf("The triangle is:\n");
    for (int i = row; i > 0; i--)
    {
        for (int k = row; k > i ; k--)
        {
            printf(" ");
        }
        for (int j = 0; j < i; j++)
        {
            printf(" *");
        }
        printf("\n");
    }
return 0;
}