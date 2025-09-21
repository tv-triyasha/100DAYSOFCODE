/*Q32: Write a program to check if a number is a palindrome.

/*
Sample Test Cases:
Input 1:
121
Output 1:
Palindrome

Input 2:
123
Output 2:
Not palindrome
*/
#include <stdio.h>

int main() 
{
    int num, original, rev = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    while(num != 0) 
    {
        rev = rev * 10 + num % 10;
        num /= 10;
    }

    if(rev == original)
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}
