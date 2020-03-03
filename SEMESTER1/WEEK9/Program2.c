/* Reads in users input for 2d array and prints
    out the values at each index as well as the largest
    value, the smallest and the average of the array.
    Author: Seán Hampson
    Date: 11-11-2019
*/
#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL];
    int value, smallest, largest, average, total = 0;
    
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("Enter value for position[ %d ][ %d ]: ", i, j);
            scanf("%d", &value);
            array[i][j] = value;
            total += value;
        }
    }
    
    average = total / (ROW * COL);
    smallest = array[0][0];
    largest  = array[0][0];
    
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            printf("Value @ position[ %d ][ %d ]: %d\n", i, j, array[i][j]);
        }
    }
    
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            if(smallest > array[i][j])
            {
                smallest = array[i][j];
            }
            
            if(largest < array[i][j])
            {
                largest = array[i][j];
            }
        }
    }
    
    printf("Smallest value: %d\nLargest value: %d\n", smallest, largest);
    printf("Average: %d\n", average);
    
    flushall();
    getchar();
    return 0;
}