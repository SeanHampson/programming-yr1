/* Q1 Lab13
    Name: Seán Hampson
    Date: 13-02-20
    Brief Discription:
        Uses a function to see if user input is
        even or odd and prints the result
*/
#include <stdio.h>

void even_or_odd(int);

int main()
{
    int num;
    
    printf("Enter a number and see if it's even or odd: ");
    scanf("%d", &num);
    
    even_or_odd(num);
    
    flushall();
    getchar();
    return 0;
}

void even_or_odd(int check_num)
{
    if( check_num % 2 == 0 )
    {
        printf("\n%d is even!", check_num);
    }
    else
    {
        printf("\n%d is odd!", check_num);
    }
}