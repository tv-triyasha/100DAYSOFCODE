/*Q65: Search in a sorted array using binary search.

/*
Sample Test Cases:
Input 1:
5
1 3 5 7 9
7
Output 1:
Found at index 3

Input 2:
5
1 3 5 7 9
6
Output 2:
-1

*/
#include <stdio.h>

int main() 
{
    int n, key;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    int low = 0, high = n - 1, mid, foundIndex = -1;

    while(low <= high) 
    {
        mid = (low + high) / 2;
        if(arr[mid] == key) {
            foundIndex = mid;
            break;
        } 
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("%d\n", foundIndex);
    return 0;
}
