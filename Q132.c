/*Q132: Define an enum for traffic lights (RED, YELLOW, GREEN) and print 'Stop', 'Wait', or 'Go' based on its value.

Sample Test Cases:
Input 1:
GREEN
Output 1:
Go
*/
#include <stdio.h>
#include <string.h>

enum Light { RED, YELLOW, GREEN };

int main() 
{
    char input[20];
    enum Light signal;

    printf("Enter light (RED/YELLOW/GREEN): ");
    scanf("%s", input);

    if (strcmp(input, "RED") == 0)
        signal = RED;
    else if (strcmp(input, "YELLOW") == 0)
        signal = YELLOW;
    else
        signal = GREEN;

    if (signal == RED)
        printf("Stop\n");
    else if (signal == YELLOW)
        printf("Wait\n");
    else
        printf("Go\n");

    return 0;
}
