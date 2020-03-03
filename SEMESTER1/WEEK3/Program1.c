/* Calculates and displays sum of integers 1 to 5
    Calculates and displays the average of following floats [1.0, 1.1, 1.2 ... 2.0]
    Author: Seán Hampson
    Date: 30-09-2019
*/
#include <stdio.h>

int main()
{
    int num1;
    float average;
    
    num1 = 1 + 2 + 3 + 4 + 5;
    average= (1.0 + 1.1 + 1.2 + 1.3 + 1.4 + 1.5 + 1.6 + 1.7 + 1.8 + 1.9 + 2.0) / 11;
    
    printf("\n%d", num1);
    printf("\n%f", average);
    
    getchar();
    return 0;
}