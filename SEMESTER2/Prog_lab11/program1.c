#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int no_of_nums;
    int no_of_bytes;
    int i;
    
    printf("Enter the number of numbers\n");
    scanf("%d", &no_of_nums);
    
    no_of_bytes = no_of_nums * sizeof(int);
    
    ptr = (int*) malloc(no_of_bytes);
    
    if(ptr == NULL)
    {
        printf("Memory failed to allocate");
    }
    else
    {
        for(i = 0; i < no_of_nums; i++)
        {
            scanf("%d", &*(ptr+i));
            printf("%d\n", *(ptr+i));
        }
        free(ptr);
    }
    return 0;
}