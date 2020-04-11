/**/
#include <stdio.h>
#define ROW 3
#define COL 2

int main()
{
    int array[ROW][COL];
    int value;
    
    for(int i = 0; i < ROW; i++)
    {
        for(int j; j < COL; j++)
        {
            printf("Value @ index [%d][%d]: ", i, j);
            scanf("%d", &value);
        }
    }
    
    
}