/*Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *


/*
Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.

*/
#include <stdio.h>

int main() 
{
    int n = 4;

    for(int i = 1; i <= n; i++) 
    {
        for(int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }

        for(int j = 1; j <= 2*i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i = n - 1; i >= 1; i--) 
    {
        for(int j = 1; j <= n - i; j++) 
        {
            printf(" ");
        }
        for(int j = 1; j <= 2*i - 1; j++) 
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
