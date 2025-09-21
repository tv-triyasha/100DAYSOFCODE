/*Q36: Write a program to find the HCF (GCD) of two numbers.

/*
Sample Test Cases:
Input 1:
12 18
Output 1:
6

Input 2:
7 9
Output 2:
1
*/
#include <stdio.h>

int main() 
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int x = a, y = b;
    while (b != 0) 
    {
        int temp = b;
        b = a % b;
        a = temp;
    }

    printf("HCF of %d and %d = %d\n", x, y, a);
    return 0;
}
