/*Prints out the values of 3 different float variables
    with different numbers of decimal points
    Author: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    float v1, v2, v3;
    
    v1 = 5.0;
    v2 = -4.5;
    v3 = 11.25;
    
    printf("v1 = %.0f v2 = %.1f v3 = %.2f", v1, v2, v3);
    
    getchar();
    
    return 0;
}