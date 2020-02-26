/* Reads in 3 fahrenheit temperatures and outputs
    these temperatures on the screen as well as their
    corresponding temperatures in celcius.
    Author: Seán Hampson
    Date: 04-11-19
*/
#include <stdio.h>
#define ELEMENTS 3

int main()
{
    float fahr[ELEMENTS];
    float cel[ELEMENTS];
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Enter temperature %d: ", i+1);
        scanf("%f", &fahr[i]);
        while(getchar() != '\n');
    }
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        cel[i] = (fahr[i] - 32) * (5.0/9.0);
    }
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%f fahrenheit = %f celsius\n", fahr[i], cel[i]);
    }
    
    flushall();
    getchar();
    
    return 0;
}