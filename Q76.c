/*Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False
*/
#include <stdio.h>

int main() 
{
    int n, m, flag = 1;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    if(n != m) 
    {
        printf("False\n");
        return 0;
    }

    int mat[n][m];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            if(mat[i][j] != mat[j][i]) 
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag)
        printf("True\n");
    else
        printf("False\n");

    return 0;
}
