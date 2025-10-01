/*Q86: Check if a string is a palindrome.

/*
Sample Test Cases:
Input 1:
madam
Output 1:
Palindrome

Input 2:
hello
Output 2:
Not palindrome
*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    char rev[100];
    int i, j, len;
    int isPalindrome = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);

    for (i = 0, j = len - 1; i < len; i++, j--) 
    {
        rev[i] = str[j];
    }
    rev[len] = '\0';
    printf("Reversed string: %s\n", rev);

    for (i = 0; i < len; i++) 
    {
        if (str[i] != rev[i]) 
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("Palindrome\n");
    else
        printf("Not Palindrome\n");

    return 0;
}
