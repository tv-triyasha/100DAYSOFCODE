/*Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40
*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int largest = arr[0], second = -2147483648;

    for(int i = 1; i < n; i++) 
    {
        if(arr[i] > largest) 
        {
            second = largest;
            largest = arr[i];
        } 
        else if(arr[i] > second && arr[i] != largest) 
        {
            second = arr[i];
        }
    }

    printf("Second largest element: %d\n", second);
    return 0;
}
