/* Q2 Lab13
    Name: Seán Hampson
    Date: 13-02-20
    Brief Discription:
        Uses a function to display
        the average of 3 numbers 
        inputted by the user
*/
#include <stdio.h>
#define NUM 3

void average(int, int, int);

int main()
{
    int num1, num2, num3;
    
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    
    average(num1, num2, num3);
    
    flushall();
    getchar();
    return 0;
}

void average(int n1, int n2, int n3)
{
    int total, average;
    
    total = n1 + n2 + n3;
    average = total / NUM;
    
    printf("\nThe average of these 3 numbers is %d", average);
}