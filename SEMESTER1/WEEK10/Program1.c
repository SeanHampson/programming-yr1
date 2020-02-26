/* Initialising 3x2d arrays, multiplying
     the corresponding values in the first and
     second arrays and storing product in third.
     Author: Seán Hampson
     Date: 18-11-19
*/
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 4
#define AMT 3

int main()
{
    srand(time(NULL));
    
    //initialising the 3 2d arrays as well as a varaible called current-checks current array the for loop is on
    int current;
    int array1[ROW][COL];
    int array2[ROW][COL];
    int array3[ROW][COL];
    
    //genearating random numbers and putting them in first 2 arrays
    for(int i = 0; i < ROW; i++)
    {
        for(int j = 0; j < COL; j++)
        {
            array1[i][j] = rand() % 11;
            array2[i][j] = rand() % 21;
            
            //the product of the corresponding numbers  in both array1 and array2 is stored in array3[same index as array1 and array2]
            array3[i][j] = array1[i][j] * array2[i][j];
        }//end col for
    }//end row for
    
    for(int i = 0; i < AMT; i++)
    {
        for(int j = 0; j < ROW; j++)
        {
            for(int x = 0; x < COL; x++)
            {
                //makes output more readable-line between each arrays content
                if(i != current)
                {
                    printf("=====================================\n");
                }
                current = i
                
                //checks which array the for loop is on
                if( i == 0 )
                {
                    printf("Array%d value @ index[%d][%d]: %d\n", i+1, j, x, array1[j][x]);
                }
                else if( i == 1)
                {
                    printf("Array%d value @ index[%d][%d]: %d\n", i+1, j, x, array2[j][x]);
                }
                else if( i == 2)
                {
                    printf("Array%d value @ index[%d][%d]: %d\n", i+1, j, x, array3[j][x]);
                }
            }//end col for
        }//end row for
    }//end array for
    
    getchar();
    return 0;
}