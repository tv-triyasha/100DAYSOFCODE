/*Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/
#include <stdio.h>
#include <math.h>

int main() 
{
    int num, lastDigit, firstDigit, digits = 0, temp, newNum;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 10) 
    {
        printf("%d\n", num);
        return 0;
    }

    temp = num;
    lastDigit = temp % 10;

    while (temp != 0) 
    {
        temp /= 10;
        digits++;
    }

    firstDigit = num / pow(10, digits - 1);
    temp = num % (int)pow(10, digits - 1);
    temp = temp / 10;
    
    newNum = lastDigit * pow(10, digits - 1) + temp * 10 + firstDigit;

    printf("Number after swapping first and last digits = %d\n", newNum);
    return 0;
}
