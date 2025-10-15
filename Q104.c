/*Q104: Write a Program to take a positive integer n as input, and find the pivot integer x such that the sum of all elements between 1 and x inclusively equals the sum of all elements between x and n inclusively. Print the pivot integer x. If no such integer exists, print -1. Assume that it is guaranteed that there will be at most one pivot integer for the given input.

Sample Test Cases:
Input 1:
n = 8
Output 1:
6

Input 2:
n = 1
Output 2:
1

Input 3:
n = 4
Output 3:
-1
*/
#include <stdio.h>

int main() 
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    int total = n * (n + 1) / 2;
    int x = -1;

    for (int i = 1; i <= n; i++) 
    {
        int leftSum = i * (i + 1) / 2;
        int rightSum = total - leftSum + i;
        if (leftSum == rightSum) 
        {
            x = i;
            break;
        }
    }

    printf("%d\n", x);
    return 0;
}
