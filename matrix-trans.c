#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the order of element:");
    scanf("%d%d",&m,&n);
    int mat1[m][n],mat[n][m];
    printf("Enter the element of matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&mat1[i][j]);
        }
    }
    printf("Transpose of entered matrix:\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[j][i]=0;
            mat[j][i]=mat1[i][j];
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d\t",mat[i][j]);
        }
        printf("\n");
    }
return 0;
}