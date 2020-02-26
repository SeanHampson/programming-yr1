/*
    Program uses a function to find the sum of three numbers
    inputted by user. The average of these three numbers are
    then calculated using another function.
*/
#include <stdio.h>
#define NUM 3

void sum(int, int, int);
void average(int);

int main()
{
    int num1, num2, num3;
    
    printf("Please enter three numbers:\n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    scanf("%d", &num3);
    
    printf("Average: ");
    sum(num1, num2, num3);
    
    flushall();
    getchar();
    return 0;
}

void sum(int num1, int num2, int num3)
{
    int sum;
    
    sum = num1 + num2 + num3;
    average(sum);
}

void average(int sum)
{
    int average;
    
    average = sum / NUM;
    printf("%d", average);
}