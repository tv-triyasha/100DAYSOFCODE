/*Q92: Find the first repeating lowercase alphabet in a string.

/*
Sample Test Cases:
Input 1:
stress
Output 1:
s
*/
#include <stdio.h>

int main() 
{
    char str[200];
    int freq[26] = {0};
    int i, found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++) 
    {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') 
        {
            freq[ch - 'a']++;
            if (freq[ch - 'a'] == 2) 
            {
                printf("%c", ch);
                found = 1;
                break;
            }
        }
    }

    if (!found)
        printf("No repeating lowercase alphabet");

    return 0;
}
