/* Reads in 5 numbers which are stored into an array.
    The data from this array is then copied into a new
    array.
    Author: Seán Hampson
    Date: 04-11-19
*/
#include <stdio.h>
#define ELEMENTS 5

int main()
{
    int numbers[ELEMENTS];
    int copynumbers[ELEMENTS];
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
        while(getchar() != '\n');
    }
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        copynumbers[i] = numbers[i];
    }
    
    flushall();
    getchar();
    
    return 0;
}