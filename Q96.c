/*Q96: Reverse each word in a sentence without changing the word order.

/*
Sample Test Cases:
Input 1:
I love coding
Output 1:
I evol gnidoc
*/
#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) 
{
    char temp;
    while (start < end) 
    {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() 
{
    char str[200];
    int i = 0;
    char *wordStart = NULL;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') 
    {
        if (wordStart == NULL && str[i] != ' ' && str[i] != '\n')
            wordStart = &str[i];

        if ((str[i] == ' ' || str[i] == '\n') && wordStart) 
        {
            reverse(wordStart, &str[i - 1]);
            wordStart = NULL;
        }
        i++;
    }

    printf("%s", str);

    return 0;
}
