/*Q39: Write a program to find the product of odd digits of a number.

/*
Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/
#include <stdio.h>

int main() 
{
    int num, digit;
    int product = 1, hasOdd = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) 
    {
        printf("Product = 0\n");
        return 0;
    }

    while (num != 0) 
    {
        digit = num % 10;
        if (digit % 2 != 0) 
        { 
            product *= digit;
            hasOdd = 1;
        }
        num /= 10;
    }

    if (hasOdd)
        printf("Product = %d\n", product);
    else
        printf("Product = 1\n");

    return 0;
}
