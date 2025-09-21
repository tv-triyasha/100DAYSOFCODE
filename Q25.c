/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.

/*
Sample Test Cases:
Input 1:
4 2 +
Output 1:
6

Input 2:
10 3 %
Output 2:
1

Input 3:
15 5 /
Output 3:
3
*/
#include <stdio.h>

int main() 
{
    double num1, num2, result;
    char op;
    
    printf("Enter two numbers and operator (+, -, *, /, %%): ");
    scanf("%lf %lf %c", &num1, &num2, &op);

    switch(op) 
    {
        case '+': result = num1 + num2; break;
        case '-': result = num1 - num2; break;
        case '*': result = num1 * num2; break;
        case '/': 
            if(num2 != 0)
                result = num1 / num2;
            else 
            {
                printf("Division by zero not allowed!\n");
                return 0;
            }
            break;
        case '%': 
            if ((int)num2 != 0)
                result = (int)num1 % (int)num2;
            else 
            {
                printf("Division by zero not allowed!\n");
                return 0;
            }
            break;
        default:
            printf("Invalid operator!\n");
            return 0;
    }
    if(op == '%')
        printf("%d\n", (int)result);
    else
        printf("%.2lf\n", result);

    return 0;
}
