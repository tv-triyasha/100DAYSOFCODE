/*Q30: Write a program to reverse a given number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4321

Input 2:
100
Output 2:
1
*/
#include <stdio.h>

int main() 
{
    int num, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0) 
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    printf("Reversed number = %d\n", rev);
    return 0;
}
