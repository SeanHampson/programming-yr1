/*Converts fahrenheit to celsius
    Author: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    float celsius, fahr;
    
    printf("Enter a temperature in degrees Fahrenheit: ");
    scanf("%f", &fahr);
    
    celsius = (fahr - 32.0) * (5.0 / 9.0);
    
    printf("%f degrees fahrenheit is equivalen to %f degrees celsius", fahr, celsius);
    
    flushall();
    getchar();
    
    return 0;
}