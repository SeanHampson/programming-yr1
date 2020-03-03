/* Prints up to the number of terms, in the fibonacci series,
    the user inputs
    Author: Seán Hampson
    Date: 21-10-19
    Compiler: Borland
    OS: Windows 10
*/
#include <stdio.h>

int main()
{
    int current, previous, term, next;
    bool exit = false;
    
    do
    {               
        printf("____________________________\nThe Fibonacci series program\n\nEnter your selection\n1. Enter the number of terms to display in the sequence\n2. End program\n> ");
        scanf("%d", &exit);
        
        switch(exit)
        {
            case 1:
            {
                printf("\nEnter the number of terms to display in the sequence: ");
                scanf("%d", &term);
                
                if(term > 2)
                {
                    //if the user wants to see more than 2 terms in the fibonacci series
                    printf("0, 1, ");
                    
                    current = 1;
                    previous = 0;
                    
                    for(int i = 2; i < term; i++)
                    {
                        next = previous + current;
                        previous = current;
                        current = next;
                        
                        if(i == (term - 1))
                        {
                            printf("%d\n", current);
                        }
                        else
                        {
                            printf("%d, ", current);
                        }
                    }//end for
                }//end if
                else
                {
                    switch(term)
                    {
                        case 1:
                        {
                            printf("0\n");
                            break;
                        }
                        
                        case 2:
                        {
                            printf("0, 1\n");
                            break;
                        }
                    }//end switch
                }
                exit = false;
                break;
            }//end case 1 program run
            
            case 2:
            {
                exit = true;
                break; 
            }//end case 2 ends program
            
        }//end switch
        
    }while(exit == false);
    
    flushall();
    getchar();
    
    return 0;
}