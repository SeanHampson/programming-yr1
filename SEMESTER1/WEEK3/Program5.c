/*  Calculates and displays the volume of a cube
    Author: Seán Hampson
    Date: 30-09-2019
*/
#include <stdio.h>

int main()
{
    float length, volume;
    
    length = 2.8;
    volume = length * length * length;
    
    printf("\nVolume is %f", volume);

    getchar();
    return 0;
}