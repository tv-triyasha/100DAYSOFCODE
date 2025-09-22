/*Q64: Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() 
{
    long num;
    int count[10] = {0};

    printf("Enter a number: ");
    scanf("%ld", &num);

    if(num < 0) num = -num;

    while(num) 
    {
        count[num % 10]++;
        num /= 10;
    }

    int maxDigit = 0;
    for(int i = 1; i < 10; i++) 
    {
        if(count[i] > count[maxDigit])
            maxDigit = i;
    }

    printf("%d\n", maxDigit);
    return 0;
}
