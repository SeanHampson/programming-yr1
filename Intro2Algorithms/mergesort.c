#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;
    int largest, temp;
    int num1, num2, num3;
    int *arr1, *arr2, *arr3;

    printf("Enter the number of elements in array 1: ");
    scanf("%d", &num1);
    /* Clears buffer */
    while(getchar() != '\n');

    /* Array1 allocated memory */
    arr1 = (int*) malloc(num1 * sizeof(int));

    printf("Enter the number of elements in array 2: ");
    scanf("%d", &num2);
    /* Clears buffer */
    while(getchar() != '\n');

    /* Size of sorted array */
    num3 = num1 + num2;

    /* Array2 allocated memory */
    arr2 = (int*) malloc(num2 * sizeof(int));

    printf("\nPlease enter %d numbers into array 1: ", num1);

    for(i = 0; i < num1; i++)
    {
        scanf("%d", &*(arr1 + i));
        /* Clears buffer */
        while(getchar() != '\n');
    }
    
    printf("\nPlease enter %d numbers into array 2: ", num2);

    for(i = 0; i < num2; i++)
    {
        scanf("%d", &*(arr2 + i));
        /* Clears buffer */
        while(getchar() != '\n');
    }

    /* Output contents of Array 1 */
    printf("\nArray1: ");

    for(i = 0; i < num1; i++)
    {
        if(i == num1 - 1)
        {
            printf("%d", *(arr1 + i));
        }
        else
        {
            printf("%d, ", *(arr1 + i));
        }
    }
    
    /* Output contents of Array 2 */
    printf("\nArray2: ");

    for(i = 0; i < num2; i++)
    {
        if(i == num2 - 1)
        {
            printf("%d", *(arr2 + i));
        }
        else
        {
            printf("%d, ", *(arr2 + i));
        }
    }

    arr3 = (int*) malloc(num3 * sizeof(int));

    j = 0;

    for(i = 0; i < num3; i++)
    {
        if(i < num1)
        {
            *(arr3 + i) = *(arr1 + i);
        }
        else
        {
            *(arr3 + i) = *(arr2 + j);
            j++;
        }
    }

    /* Output contents of Array 3 */
    printf("\nMerged Array: ");

    for(i = 0; i < num3; i++)
    {
        if(i == num3 - 1)
        {
            printf("%d", *(arr3 + i));
        }
        else
        {
            printf("%d, ", *(arr3 + i));
        }
    }

    largest  = *(arr3);
    //smallest = *(arr3);

    for(i = 1; i < num3; i++)
    {
        if( largest < *(arr3 + i) )
        {
            largest = *(arr3 + i);
        }
        else
        {
            temp = *(arr3 + (i - 1));
            *(arr3 + i) = *(arr3 + (i - 1));
            *(arr3 + i) = temp;
        }
    }

    /* Output contents of Sorted Array */
    printf("\nSorted Array: ");

    for(i = 0; i < num3; i++)
    {
        if(i == num3 - 1)
        {
            printf("%d", *(arr3 + i));
        }
        else
        {
            printf("%d, ", *(arr3 + i));
        }
    }

    getchar();
    return 0;
}