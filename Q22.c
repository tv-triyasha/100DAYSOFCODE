/*Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss
*/
#include <stdio.h>

int main() 
{
    float CP, SP;
    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &CP, &SP);

    if (SP > CP) 
    {
        float profit = SP - CP;
        printf("Profit = %.2f\n", profit);
        printf("Profit Percentage = %.2f%%\n", (profit / CP) * 100);
    } 
    else if (CP > SP) 
    {
        float loss = CP - SP;
        printf("Loss = %.2f\n", loss);
        printf("Loss Percentage = %.2f%%\n", (loss / CP) * 100);
    } 
    else 
    {
        printf("No Profit, No Loss\n");
    }

    return 0;
}
