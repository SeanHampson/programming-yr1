/* Q3 Lab11
    DMA to allocate memory for 5
    floating point numbers
*/
#include <stdio.h>
#include <stdlib.h>
#define NUM 5

int main()
{
    int i, total, average;
    float *ptr1, *ptr2;
    int no_of_bytes;
    
    no_of_bytes = NUM * sizeof(float);
    
    ptr1 = (float*) malloc(no_of_bytes);
    ptr2 = (float*) malloc(sizeof(float));
    
    printf("Enter 5 floating point numbers: ");
    
    for(i = 0; i < NUM; i++)
    {
        scanf("%f", &*(ptr1+i));
        total += *(ptr1+i);
    }
    
    average = total / NUM;
    
    *(ptr2) = average;
    
    for(i = 0; i < NUM; i++)
    {
        printf("No. %d: %f\n", i+1, *(ptr1+i));
    }
    
    printf("Average: %f", *(ptr2));
    
    flushall();
    getchar();
    return 0;
}
    