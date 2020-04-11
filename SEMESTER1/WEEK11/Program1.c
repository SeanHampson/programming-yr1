/* Prints the contents and addresses of 2 variables
    with different data types using pointers
    Author: Seán Hampson
    Date: 25-11-2019
*/
#include <stdio.h>
#define SIZE 6

int main()
{
    //Initialising variables
    int num1;
    char char1;
    int *ptr1;
    char *ptr2;
    int *ptr3;
    
    //Variable declaration
    num1 = SIZE;
    char1 = 'g';
    ptr1 = &num1;
    ptr2 = &char1;
    
    //Prints contents and addresses of num1 and char1
    printf("num1 contains %d and is located at %p\n", num1, ptr1);
    printf("char1 contains %c and is located at %p\n", char1, ptr2);
    
    //Prints addresses stored in ptr1 and ptr2
    printf("ptr1 contains %p\n", ptr1);
    printf("ptr2 contains %p\n", ptr2);
    printf("ptr3 contains %p\n", ptr3);
    
    //Prints contents stored at the addresses stored in ptr1 and ptr2
    printf("The address stored in ptr1 contains %d\n", &ptr1);
    printf("The address stored in ptr2 contains %c\n", &ptr2);
    
    getchar();
    return 0;
}