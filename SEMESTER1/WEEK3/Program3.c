/* Calculates and displays the area of a circle
    Author: Seán Hampson
    Date: 30-09-2019
*/
#include <stdio.h>

int main()
{
    float pi, radius, area;
    
    pi = 3.14;
    radius = 4.8;
    area = pi * radius * radius;
    
    printf("\nArea is %f", area);
    
    getchar();
    return 0;
}