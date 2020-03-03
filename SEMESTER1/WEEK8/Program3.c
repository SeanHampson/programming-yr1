/* Reads in 4 numbers which are stored into an array and displayed
    separately in the order they were entered, the order is then manipulated
    and this new order is printed to the screen.
    Author: Seán Hampson
    Date: Seán Hampson
*/
#include <stdio.h>
#define ELEMENTS 4

int main()
{
    int numbers[ELEMENTS];
    int temp;
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
        while(getchar() != '\n');
    }
    
    printf("\nOriginal Order:\n");
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%d\n", numbers[i]);
    }
    
    temp = numbers[0];
    numbers[0] = numbers[1];
    numbers[1] = temp;
    
    temp = numbers[2];
    numbers[2] = numbers[3];
    numbers[3] = temp;
    
    printf("\nFlipped Order:\n");
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%d\n", numbers[i]);
    }
    
    flushall();
    getchar();
    
    return 0;
}
    