/* Displays the contetnts of a[8].
    Uses symbolic names and arrays
    Author: Seán Hampson
    Date: 11-11-2019
*/
#include <stdio.h>
#define ELEMENTS 10

int main()
{
    int a[ELEMENTS];
    
    for(int i = 0; i < 10; i++)
    {
        a[i] = 9 - i;
    }
    
    for(int i = 0; i < 10; i++)        
    {
        a[i] = a[ a[i] ];
    }
    
    for(int i = 0; i < 10; i++)
    {
        printf("%d: [ %d ]\n", i+1, a[i]);
    }
    
    getchar();
    return 0;
}