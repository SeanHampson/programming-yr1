/*Reads input and outputs whether or not 
    the character is a vowel
    Author: Seán Hampson
    Date: 14-10-2019
*/
#include <stdio.h>

int main()
{
    char c;
    
    printf("Enter a character: ");
    scanf("%1s", &c);
    
    switch(c)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        {
            printf("You've inputted a vowel\n");
            break;
        }
        default:
        {
            printf("You did not enter a vowel\n");
            break;
        }
    }// END SWITCH
    
    flushall();
    getchar();
    
    return 0;
}