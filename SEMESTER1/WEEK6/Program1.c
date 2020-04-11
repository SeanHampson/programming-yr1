/* Prints numbers 1-10 in descending 
    order using while loop
    Author: Seán Hampson
    Date: 21-10-19
*/
#include <stdio.h>

int main()
{
    int counter = 10;
    
    while(counter > 0)
    {
        printf("%d\n", counter);
        counter--;
    }
    
    getchar();
    
    return 0;
}