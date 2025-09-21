/*Q34: Write a program to check if a number is prime.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Prime

Input 2:
10
Output 2:
Not prime
*/
#include <stdio.h>

int main() {
    int num, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime)
        printf("Prime\n");
    else
        printf("Not prime\n");

    return 0;
}

