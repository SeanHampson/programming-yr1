/* Calculates the sum of all the elements in the given
     array and outputs this result to the screen
     Author: Seán Hampson
     Date: 18-11-19
*/
#include <stdio.h>
#define ROW 4
#define COL 6

int main()
{
    //initialising and declaring 2d array
    int data[ROW][COL] = { 
        {3, 2, 5, 7, 4, 2},
        {1, 4, 4, 8,13, 1},
        {9, 1, 0, 2, 4, 9},
        {0, 2, 6, 3,-1,-8}
    };
    
    //declare the sum
    int i, j;
    int sum = 0;
                   
    //compute the sum
    for(i = 0; i < ROW; i++)
    {
        for(j = 0; j < COL; j++)
        {
            sum += data[i][j];
        }//end col for
    }//end row for
    
    //display the sum
    printf("%d\n", sum);
    
    getchar();
    return 0;
}