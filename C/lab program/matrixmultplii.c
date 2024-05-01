#include <stdio.h>
int main()
{
    int m, n, a, b;
    printf("Enter the order of matrix1:\n");
    scanf("%d%d", &m, &n);
    printf("Enter the order of matrix2:\n");
    scanf("%d%d", &a, &b);
    int mat1[m][n], mat2[a][b],mat[m][b];
    if (a != n)
    {
        printf("matrix multiplication is not possible");
    }
    else{
        printf("Enter the element of matrix1:");
        for (int i = 0; i < m; i++)
        {
           for (int j = 0; j < n; j++)
           {
            scanf("%d",&mat1[i][j]);
            
           }
        }
        printf("Enter the element of matrix2:");
        for (int i = 0; i < a; i++)
        {
           for (int j = 0; j < b; j++)
           {
            scanf("%d",&mat2[i][j]);
           }
           
        }
        
        for (int k = 0; k < m; k++)
        {
        for (int i = 0; i < b; i++)
        {
            mat[k][i]=0;
           for (int j = 0; j < a; j++)
           {
            mat[k][i]+=mat1[k][j]*mat2[j][i];
           }
           
        }
    }

    }
    printf("\nthe new multiplied matrix is:\n");
    for (int i = 0; i < m; i++)
        {
           for (int j = 0; j < b; j++)
           {
           printf("%d",mat[i][j]);
           printf("\t");
           }
            printf("\n");
        }
    return 0;
}