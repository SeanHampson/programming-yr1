#include <stdio.h>
#include <stdlib.h>

void merge(int*, int, int, int);
void list_array(int*);

int main()
{
    int i, len;

    printf("How long would you like the array to be: ");
    scanf("%d", &len);

    int* arr = (int*) malloc( len * sizeof(int) );

    for(i = 0; i < len; i++)
    {
        printf("Number %d: ", i);
        scanf("%d", &*(arr + i));
    }

    merge(arr, 0, ((len - 1)/2) - 1, len - 1);

    fflush(stdin);
    getchar();
    return 0;
}

void merge(int* array, int lo, int mid, int hi)
{
    int i;
    int size1 = mid - lo - 1;
    int size2 = hi - mid;

    int* first_half = (int*) malloc( size1 * sizeof(int) );
    int* secon_half = (int*) malloc( size2 * sizeof(int) );

    for(i = 0; i < size2; i++)
    {
        if( i < size1 )
        {
            *(first_half + i) = *(array + i);
        }
        else
        {
            *(secon_half + i) = *(array + i);
        }
    }

    printf("First half:\n");
    list_array(first_half);

    printf("Second half:\n");
    list_array(secon_half);
}

void list_array(int* array)
{
    int i;
    size_t size = sizeof(array) / sizeof(int);

    for(i = 0; i < size; i++)
    {
        if( i == (size - 1) )
        {
            printf("%d\n", *(array + i));
        }
        else
        {
            printf("%d, ", *(array + i));
        }
    }
}

