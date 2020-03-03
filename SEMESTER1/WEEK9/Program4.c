/* Reads in 5 values into 2x1d arrays.
    The corresponding values of each array
    are multiplied and the product is printed
    Author: Seán Hampson
    Date: 11-11-2019
*/
#include <stdio.h>
#define ELEMENTS 5

int main()
{
    int array1[ELEMENTS];
    int array2[ELEMENTS];
    int product;
    
    printf("ARRAY 1:\n");
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Index %d: ", i+1);
        scanf("%d", &array1[i]);
    }
    
    printf("\nARRAY 2:\n");
    for(int i = 0; i < ELEMENTS; i++)
    {
        printf("Index %d: ", i+1);
        scanf("%d", &array2[i]);
    }
    
    printf("\n");
    for(int i = 0; i < ELEMENTS; i++)
    {
        product = array1[i] * array2[i];
        printf("Array1 index %d * Array2 index %d = %d\n", i+1, i+1, product);
    }
    
    flushall();
    getchar();
    return 0;
}