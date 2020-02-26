/*Asks user for 3 float numbers and displays all 3 on 
    separate lines with the 1st to 4 decimal places,
    2nd to 3 decimal places and 3rd with none
    Author: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    float fnum1, fnum2, fnum3;
    
    printf("Please enter the first float number: ");
    scanf("%f", &fnum1);
    
    printf("Please enter the second float number: ");
    scanf("%f", &fnum2);
    
    printf("Please enter the third float number: ");
    scanf("%f", &fnum3);
    
    printf("\n%.4f\n%.3f\n%.0f", fnum1, fnum2, fnum3);
    
    flushall();
    getchar();
    
    return 0;
}