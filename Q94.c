/*Q94: Find the longest word in a sentence.

/*
Sample Test Cases:
Input 1:
I love programming
Output 1:
programming
*/
#include <stdio.h>
#include <string.h>

int main() 
{
    char str[200], word[50], longest[50];
    int i = 0, j = 0, maxLen = 0, len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        if (str[i] != ' ' && str[i] != '\n') 
        {
            word[j++] = str[i];
        } else {
            word[j] = '\0';
            len = strlen(word);
            if (len > maxLen) 
            {
                maxLen = len;
                strcpy(longest, word);
            }
            j = 0;
        }
        i++;
    }

    printf("%s\n", longest);

    return 0;
}
