/*Q98: Print initials of a name with the surname displayed in full.

/*
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char name[100];
    int i, len, lastSpace = -1;

    printf("Enter a name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    for (i = 0; i < len; i++) 
    {
        if (name[i] == ' ')
            lastSpace = i;
    }

    for (i = 0; i < lastSpace; i++) 
    {
        if ((i == 0 && name[i] != ' ') || (name[i] == ' ' && name[i + 1] != ' ' && name[i + 1] != '\0' && name[i + 1] != '\n'))
            printf("%c.", toupper(name[i == 0 ? i : i + 1]));
    }

    if (lastSpace != -1)
        printf(" %s", name + lastSpace + 1);

    return 0;
}
