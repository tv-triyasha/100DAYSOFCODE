/*Q77: Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
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

    int mat[n][m], diag[n];
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i < n; i++) 
    {
        for(int j = 0; j < m; j++) 
        {
            scanf("%d", &mat[i][j]);
            if(i == j) 
            {
                diag[i] = mat[i][j];
            }
        }
    }
    for(int i = 0; i < n; i++) 
    {
        for(int j = i + 1; j < n; j++) 
        {
            if(diag[i] == diag[j]) 
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
