/*Calculates volume and surface area of a box
    and displays the values
    Author: Seán Hampson
    Date: 30-09-2019
*/
#include <stdio.h>

int main() 
{
    float height, length, width, volume, sArea;
    
    height = 10.0;
    length = 11.5;
    width  = 2.5;
    
    volume = height * length * width;
    sArea = 2 * (height * length + height * width + width * length);
    
    printf("\nVolume = %f", volume);
    printf("\nSurface Area = %f", sArea);
    
    
    getchar();
    return 0;
}