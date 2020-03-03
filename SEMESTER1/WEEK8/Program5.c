/* Reads in 5 characters and stores them in an array
    and are then outputted to display.
    Author: Seán Hampson
    Date: 04-11-19
*/
#include <stdio.h>
#define ELEMENTS 5

int main()
{
    char characters[ELEMENTS];
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Enter character %d: ", i+1);
        scanf("%1s", &characters[i]);
        while(getchar() != '\n');
    }
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%c\n", characters[i]);
    }
    
    flushall();
    getchar();
    
    return 0;
}