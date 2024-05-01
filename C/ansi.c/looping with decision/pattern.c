#include<stdio.h>
int main()
{
    int row,x=1,y=1;
    printf("Enter the number of row:");
    scanf("%d",&row);
    for(int i=0;i<row/2+1;i++){
        for (int j = 0; j < row/2-i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <=i+1 ; k++)
        {
            printf(" %d",k);
            x++;
        }
        for (int l = 1; l <=i; l++)
        {
            printf(" %d",l);
            y++;
        }
        printf("\n");
    }
    for(int i=0;i<row/2;i++){
        for (int j = 0; j <= i; j++)
        {
            printf("  ");
        }
        for (int k = 1; k <=row/2-i ; k++)
        {
            printf(" %d",k);
            x++;
        }
        for (int l = 1; l <row/2-i; l++)
        {
            printf(" %d",l);
            y++;
        }
        printf("\n");
    }
return 0;
}