/*Q68: Delete an element from an array.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
1 2 4 5
*/
#include <stdio.h>

int main() 
{
    int n, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter position (1-based) to delete: ");
    scanf("%d", &pos);

    if(pos < 1 || pos > n) 
    {
        printf("Invalid position!\n");
        return 0;
    }

    for(int i = pos - 1; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }

    printf("Array after deletion: ");
    for(int i = 0; i < n - 1; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
