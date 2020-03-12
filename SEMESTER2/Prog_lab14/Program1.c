/* Name: Sean Hampson
    Date: 20/02/2020
    2 functions are used in this program to find both
    the area of a square and the area of a circle.
    The user is asked to enter the length of the square's
    side and the radius of the circle to find both these
    values.
*/
#include <stdio.h>
#define PI 3.14

/* Function signatures */
float area_square(float);
float area_circle(float);

int main()
{
    float length;
    float radius;
    
    // Asks user for square side length
    printf("Enter square length size to find the area: ");
    scanf("%f", &length);
    
    // Asks user for circle radius length
    printf("\nEnter circle's radius to find the area: ");
    scanf("%f", &radius);
    
    printf("\nSquare with side length of %f has an area of %f", length, area_square(length));
    printf("\nCircle with radius of %f has an area of %f", radius, area_circle(length));
    
    flushall();
    getchar();
    return 0;
}

float area_square(float len)
{
    float area;
    
    // Area of square = side length squared
    area = len * len;
    
    return area;
}

float area_circle(float r)
{
    float area;
    
    // Area of circle = PI times radius squared
    area = PI * r * r;
    
    return area;
}