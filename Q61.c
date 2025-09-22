/*Q61: Search for an element in an array using linear search.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>

int main() 
{
    int n, key, found = 0, index = -1;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    for(int i = 0; i < n; i++) 
    {
        if(arr[i] == key) 
        {
            found = 1;
            index = i;
            break;
        }
    }

    if(found)
        printf("Found at index %d\n", index);
    else
        printf("-1\n");

    return 0;
}
