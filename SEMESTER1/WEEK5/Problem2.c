/*Asks user to input a number between 1 and 100
    and outputs whether the number is even or odd
    Author: Seán Hampson
    Date: 14-10-2019
*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a number between 1 and 100: ");
    scanf("%d", &num);
    
    if(num % 2 == 0)
    {
        printf("Number %d is even\n", num);
    }
    else
    {
        printf("Number %d is odd\n", num);
    }
    
    flushall();
    getchar();
    
    return 0;
}