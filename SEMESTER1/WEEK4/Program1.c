/*Asks users for 3 numbers and displays them
    on separate lines
    Author: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3;
    
    printf("Please enter the first number: ");
    scanf("%d", &num1);
    
    printf("Please enter the second number: ");
    scanf("%d", &num2);
    
    printf("Please enter the third number: ");
    scanf("%d", &num3);
    
    printf("\n%d\n%d\n%d\n", num1, num2, num3);
    
    flushall();
    getchar();
    
    return 0;
}