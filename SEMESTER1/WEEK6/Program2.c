/**/
#include <stdio.h>

int main()
{
    int posint = 0;
    int steps = 0;
    
    printf("Please input a positive integer: ");
    scanf("%d", &posint);
    
    while(posint != 1)
    {
        if(posint > 0)
        {
            if(posint % 2 == 0)
            {
                posint /= 2;
                printf("Next value is %d\n", posint);
                steps++;
            }
            else
            {
                posint *= 3;
                posint += 1;
                printf("Next value is %d\n", posint);
                steps++;
            }
        }
        else
        {
            printf("Error please re-enter a positive interger or n to exit!\n");
            scanf("%d", &posint);
            
            switch(posint)
            {
                case 'n':
                case 'N':
                {
                    break;
                }
            }//end switch
        }//end if else
    }//end while
    
    printf("Final value 1, number of steps %d\n", steps);
    
    flushall();
    getchar();
    
    return 0;
}