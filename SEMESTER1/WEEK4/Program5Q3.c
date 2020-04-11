/*Receives 4 numbers and outputs these in reverse
    Author: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    int num1, num2, num3, num4;
    
    scanf("%d %d %d %d", &num1, &num2, &num3, &num4);
    printf("%d%d%d%d", num4, num3, num2, num1);
    
    flushall();
    getchar();
    
    return 0;
}