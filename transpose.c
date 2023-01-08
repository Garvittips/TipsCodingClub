#include <stdio.h>
#include <conio.h>

void main() 
{
    int matrix[3][3], transposed_matrix[3][3], i, j;

    printf("Enter the matrix (3X3):\n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Original matrix is : \n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            transposed_matrix[j][i] = matrix[i][j];
        }
    }

    printf("Transposed matrix is : \n");
    for (i = 0; i < 3; i++) 
    {
        for (j = 0; j < 3; j++) 
        {
            printf("%d ", transposed_matrix[i][j]);
        }
        printf("\n");
    }
    getch();
}
