#include<stdio.h>
int matrix[3][3];

void add(int (*m1),int (*m2),int row,int col){
    for (int i = 0; i < row; i++)
    {
        for(int j=0;j<col;j++){
             matrix[i][j]= *(m1 + i * col + j) + *(m2 + i * col + j);
        
        }
        printf("\n");
    }      
}

int main()
{
    int mat1[3][3],mat2[3][3];
    printf("Enter the element of matrix1:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&mat1[i][j]);
        }   
    }
    printf("\nEnter the element of matrix2:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("[%d][%d]:",i,j);
            scanf("%d",&mat2[i][j]);
        }  
    }
    add(&mat1[0][0],&mat2[0][0],3,3);
    printf("\nsummation of matrix is:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    
return 0;
}
// func(rows, cols, matrix);