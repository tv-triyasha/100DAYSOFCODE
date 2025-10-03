/*Q89: Count frequency of a given character in a string.

/*
Sample Test Cases:
Input 1:
programming
g
Output 1:
2
*/
#include <stdio.h>

int main() 
{
    char str[200], ch;
    int i, count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf(" %c", &ch);
    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] == ch)
            count++;
    }

    printf("%d\n", count);

    return 0;
}
