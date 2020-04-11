/* Reads in 5 numbers and stores these in an array. These values 
     are then copied in reverse order into another array.
     Author: Seán Hampson
     Date: 04-11-19
*/
#include <stdio.h>
#define ELEMENTS 5

int main()
{
    int numbers[ELEMENTS];
    int revnumbers[ELEMENTS];
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
        while(getchar() != '\n');
    }
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        revnumbers[i] = numbers[ELEMENTS-i-1];
    }
    
    printf("\nOriginal:\n");
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%d\n", numbers[i]);
    }
    
    printf("\nReversed:\n");
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%d\n", revnumbers[i]);
    }
    
    flushall();
    getchar();
    
    return 0;
}