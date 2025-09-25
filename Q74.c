/*Q74: Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6
*/
#include <stdio.h>

int main() 
{
    int rows, cols;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols], trans[cols][rows];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            scanf("%d", &mat[i][j]);
            trans[j][i] = mat[i][j];
        }
    }
    printf("Transpose of the matrix:\n");
    for(int i = 0; i < cols; i++) 
    {
        for(int j = 0; j < rows; j++) 
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
