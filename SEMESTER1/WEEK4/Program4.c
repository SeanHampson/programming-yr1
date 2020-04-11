/*Asks users for 2 characters and displays them
    on separate lines
    Author: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    char char1, char2;
    
    printf("Please enter the first character: ");
    char1 = getchar();
    
    flushall();
        
    printf("Please enter the second character: ");
    char2 = getchar();
    
    putchar(char1);
    printf("\n");
    putchar(char2);
    
    flushall();
    getchar();
    
    return 0;
}