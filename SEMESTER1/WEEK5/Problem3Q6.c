/*Reads in a single numeral and outputs it as a word
    Author: Seán Hampson
    Date: 14-10-2019
*/
#include <stdio.h>

int main()
{
    int num;
    
    printf("Enter a single numeral: ");
    scanf("%d", &num);
    
    switch(num)
    {
        case 1:
        {
            printf("one\n");
            break;
        }
        case 2:
        {
            printf("two\n");
            break;
        }
        case 3:
        {
            printf("three\n");
            break;
        }
        case 4:
        {
            printf("four\n");
            break;
        }
        case 5:
        {
            printf("five\n");
            break;
        }
        case 6:
        {
            printf("six\n");
            break;
        }
        case 7:
        {
            printf("seven\n");
            break;
        }
        case 8:
        {
            printf("eight\n");
            break;
        }
        case 9:
        {
            printf("nine\n");
            break;
        }
        default:
        {
            printf("error:not a single numeral\n");
            break;
        }
    }//END SWITCH
    
    flushall();
    getchar();
    
    return 0;
}