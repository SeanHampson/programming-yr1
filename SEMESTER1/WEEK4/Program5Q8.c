/*Takes 3 float numbers as input and prints their sum and the
    average between the 3
    Authr: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    float num1, num2, num3, sum, average;
    
    scanf("%f %f %f", &num1, &num2, &num3);
    
    sum = num1 + num2 + num3;
    average = sum / 3;
    
    printf("Sum: %f\nAverage: %f\n", sum, average);
    
    flushall();
    getchar();
    
    return 0;
}