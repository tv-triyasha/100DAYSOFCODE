/*Q85: Reverse a string.

/*
Sample Test Cases:
Input 1:
abcd
Output 1:
dcba
*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[100];
    int i, j, len;
    char temp;

    printf("Enter a string: ");
    scanf("%s", str);

    len = strlen(str);
    for (i = 0, j = len - 1; i < j; i++, j--) 
    {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
    printf("Reversed string: %s\n", str);
    return 0;
}
