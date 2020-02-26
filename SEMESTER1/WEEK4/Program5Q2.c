/*Receives various input form user consisting of a series
    of different data types
    Author: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    int first;
    
    scanf("%d", &first);
    
    int second, third, fourth;
    
    scanf("%d %d %d", &second, &third, &fourth);
    
    float principal, rate, time;
    
    scanf("%f %f %f", &principal, &rate, &time);
    
    char keyval1, keyval2;
    
    scanf("%1s %1s", &keyval1, &keyval2);
    
    char c;
    int i;
    float f;
    double d;
    
    scanf("%1s %d %f %lf", &c, &i, &f, &d);
    
    flushall();
    getchar();
    
    return 0;
}