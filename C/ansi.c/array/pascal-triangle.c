#include<stdio.h>
int main()
{
    int row,p[10][10]={1};
    printf("Enter the number of row:");
    scanf("%d",&row);
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= i; j++)
        {
          if(j==0&&j==i)
          printf("1\t");
          else
          printf("%d\t",)
        }
       printf("\n"); 
    }
    
return 0;
}