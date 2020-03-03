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
    scanf("%1s", &char1);
        
    printf("Please enter the second character: ");
    scanf("%1s", &char2);
    
    printf("\n%c\n%c\n", char1, char2);
    
    flushall();
    getchar();
    
    return 0;
}