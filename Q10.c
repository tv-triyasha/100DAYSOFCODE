/*Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

/*
Sample Test Cases:
Input 1:
3661
Output 1:
1:1:1

Input 2:
7322
Output 2:
2:2:2

*/
#include <stdio.h>

int main() {
    int seconds, h, m, s;
    printf("Enter time in seconds: ");
    scanf("%d", &seconds);

    h = seconds / 3600;          
    m = (seconds % 3600) / 60;   
    s = seconds % 60;            

    printf("Time = %02d:%02d:%02d\n", h, m, s);

    return 0;
}
