/*
    Uses a function to display 3 numbers in order of value
*/
#include <stdio.h>

void hier(int, int, int);

int main()
{
    hier(56, 83, 3);
    
    getchar();
    return 0;
}

void hier(int num1, int num2, int num3)
{
    int highest;
    int lowest;
    
    if( num1 < num2 ) //num1 is smaller than num2
    {
        if( num1 < num3 ) //and num1 is smaller than num3 therefore is the smallest
        {
            lowest = num1; 
            
            if( num2 > num3 )
            {
                highest = num2;
            }
            else
            {
                highest = num3;
            }
        }
        else //num3 is smallest
        {
            lowest  = num3;
            highest = num2;
        }
    }
    else //num1 is bigger than num2
    {
        if( num2 < num3 ) //and num2 is smaller than num3 therefore is the smallest
        {
            lowest = num2;
            
            if( num1 > num3 )
            {
                highest = num1;
            }
            else
            {
                highest = num3;
            }
        }
        else //num3 is smallest             
        {
            lowest  = num3;
            highest = num1;
        }
    }
    printf("Highest: %d\nLowest: %d", highest, lowest);
}