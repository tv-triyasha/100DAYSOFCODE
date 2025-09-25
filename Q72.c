/*Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21
*/
#include <stdio.h>

int main() 
{
    int rows, cols, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < rows; i++) 
    {
        for(int j = 0; j < cols; j++) 
        {
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("Sum of all elements = %d\n", sum);

    return 0;
}
