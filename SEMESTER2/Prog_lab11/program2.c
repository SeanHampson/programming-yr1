#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int no_of_nums;
    int i;
    
    printf("Enter the number of numbes\n");
    scanf("%d", &no_of_nums);
    
    ptr = (int*) calloc(no_of_nums, sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory failed to allocate\n");
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