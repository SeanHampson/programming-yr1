/* Read in 15 values to be stored in an array.
    Each value in the array is then printed out
    first on a newline each time, then on one line
    each value separated by a space. Finally the 
    values are printed in reverse each separated 
    by a space.
    Author: Seán Hampson
    Date: 11-11-2019
*/
#include <stdio.h>
#define ELEMENTS 15

int main()
{
    int array[ELEMENTS];
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Enter value for index %d: ", i+1);
        scanf("%d", &array[i]);
    }
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%d\n", array[i]);
    }
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%d ", array[i]);
    }
    
    printf("\n");
    
    for(int i = ELEMENTS-1; i > -1; i--)
    {
        printf("%d ", array[i]);
    }
    
    flushall();
    getchar();
    return 0;
}