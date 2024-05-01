#include<stdio.h>
int main()
{
    int row,x=1,y=0;
    printf("Enter the number of row:");
    scanf("%d",&row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 0; j < row-i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i; j++)
        {
            if(i%2!=0){
               printf(" %d ",x);
               x++;
            }
            else{
                printf(" %c ",65+y);
                y++;
            }
        }
        printf("\n");
    }
    
return 0;
}