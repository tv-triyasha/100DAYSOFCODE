/*Q18: Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.

/*
Sample Test Cases:
Input 1:
95
Output 1:
Grade A

Input 2:
82
Output 2:
Grade B

Input 3:
68
Output 3:
Grade D

Input 4:
50
Output 4:
Grade F
*/
#include <stdio.h>

int main() 
{
    float percentage;
    char grade;
    printf("Enter percentage (0-100): ");
    scanf("%f", &percentage);

    if (percentage >= 90 && percentage <= 100)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else if (percentage >= 0)
        grade = 'F';
    else 
    {
        printf("Invalid percentage!\n");
        return 0;
    }

    printf("Grade = %c\n", grade);
    return 0;
}
