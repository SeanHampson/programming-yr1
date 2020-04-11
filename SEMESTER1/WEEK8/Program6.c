/* Reads in 3 numbers and stores these into an array.
    This array is then sorted into ascending order.
    Author: Seán Hampson
    Date: 04-11-19
*/
#include <stdio.h>
#define ELEMENTS 3

int main()
{
    int numbers[ELEMENTS];
    int temp = 0;
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Enter number %d: ", i+1);
        scanf("%d", &numbers[i]);
        while(getchar() != '\n');
    }
    
    do
    {
        for(int i = 0; i < ELEMENTS; i++)
        {  
            if(numbers[i] > numbers[i+1])
            {
                temp = numbers[i];
                numbers[i] = numbers[i+1];
                numbers[i+1] = temp;
                printf("\n[INDEX: %d]%d was moved behind %d in the array\n", i+1, numbers[i+1], numbers[i]);
            }
            else
            {
                printf("[");
                for(int i = 0; i < ELEMENTS; i++)
                {
                    if(i < ELEMENTS-1)
                    {
                        printf("%d, ", numbers[i]);
                    }
                    else
                    {
                        printf("%d", numbers[i]);
                    }
                }
                printf("]\n");
            }
        }
    }while(temp != 0);
    
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("%d\n", numbers[i]);
    }
    
    flushall();
    getchar();
    
    return 0;
}
