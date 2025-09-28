/*Q78: Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15
*/
#include <stdio.h>

int main() 
{
    int n, m, sum = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    if(n != m) 
    {
        printf("Not a square matrix!\n");
        return 0;
    }

    int mat[n][m];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            scanf("%d", &mat[i][j]);
            if(i == j) 
            {
                sum += mat[i][j];
            }
        }
    }

    printf("%d\n", sum);
    return 0;
}
