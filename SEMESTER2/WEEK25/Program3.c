/* Q3 Lab13
    Name: Seán Hampson
    Date: 13-02-20
    Brief Discription:
       Displays the highest number out of3 that
       are inputted by user by using a function
*/
#include <stdio.h>
#define NUM 3

int biggest(int, int, int);

int main()
{
    int num1, num2, num3;
    int largest;
    
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    
    largest = biggest(num1, num2, num3);
    printf("\nThe highest value number of the three is %d", largest);
    
    flushall();
    getchar();
    return 0;
}

int biggest(int n1, int n2, int n3)
{
    int largest;
    
    //n1 is bigger than n2 check if it's bigger than n3 too
    if( n1 > n2 )
    {
        if( n1 > n3 ) //n1 bigger than other 2 numbers
        {
            largest = n1;
        }
        else //n3 bigger than other 2 numbers
        {
            largest = n3;
        }
    }
    else
    {
        //n2 is bigger than n1 check if it's bigger than n3 too
        if( n2 > n3 )
        {
            largest = n2;
        }
        else //n3 bigger than other 2 numbers
        {
            largest = n3;
        }
    }
    return largest;
}