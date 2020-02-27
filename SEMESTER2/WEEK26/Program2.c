/* Name: Sean Hampson
    Date: 20/02/2020
    Asks for user to enter 5 numbers into an array. This array
    is then passed to a function which returns the largest value.
*/
#include <stdio.h>
#define NUM 5

/* Function signature */
int highest(int[]);

int main()
{
    int i;
    int array[NUM];
    
    printf("Enter 5 numbers to be added to the array:\n");
    
    for(i = 0; i < NUM; i++)
    {
        scanf("%d", &array[i]);
    }// END FOR
    
    printf("\nThe largest number in the array is %d.", highest(array));
    
    flushall();
    getchar();
    return 0;
}

int highest(int arr[])
{
    int i;
    int largest;
    
    largest = arr[0];
    
    for(i = 0; i < NUM; i++)
    {
        if( arr[i] > largest )
        {
            largest = arr[i];
        }// END IF
    }// END FOR
    
    return largest;
}
            
