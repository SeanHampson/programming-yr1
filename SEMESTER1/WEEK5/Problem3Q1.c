/*Reads marriage status code and ouputs value
    Author: Seán Hampson
    Date: 14-10-2019
*/
#include <stdio.h>

int main()
{
    char marriage_status;
    
    printf("Enter marriage status below\n");
    printf("[S = single|M = married|W = widowed|E = separated|D = divorced]\n:");
    scanf("%1s", &marriage_status);
    
    switch(marriage_status)
    {
        case 'S':
        {
            printf("single\n");
            break;
        }
        case 'M':
        {
            printf("married\n");
            break;
        }
        case 'W':
        {
            printf("widowed\n");
            break;
        }
        case 'E':
        {
            printf("separated\n");
            break;
        }
        case 'D':
        {
            printf("divorced\n");
            break;
        }
        default:
        {
            printf("error:invalid code\n");
            break;
        }
            
        
    }//END SWITCH    
        
    flushall();
    getchar();
    
    return 0;
}