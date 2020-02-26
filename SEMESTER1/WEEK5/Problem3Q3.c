/*Reads in 2 integers and checks if first is evenly divisble by second
    and outputs if so or not
    Author: Seán Hampson
    Date: 14-10-2019
*/
#include <stdio.h>

int main()
{
    int num1, num2;
    
    printf("Enter 2 integers separated by a space: ");
    scanf("%d %d", &num1, &num2);
    
    if(num1 % num2 == 0)
    {
        printf("%d is evenly divisible by %d\n", num1, num2);
    }
    else
    {
        printf("%d is not evenly divisible by %d\n", num1, num2);
    }
    
    flushall();
    getchar();
    
    return 0;
}