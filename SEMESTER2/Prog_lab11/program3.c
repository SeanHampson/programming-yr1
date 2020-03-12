#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int no_of_nums;
    int total;
    int i;
    
    printf("Enter the number of numbers to be added to the array\n");
    scanf("%d", &no_of_nums);
    
    ptr = (int*) malloc(no_of_nums * sizeof(int));
    
    if(ptr == NULL)
    {
        printf("Memory failed to allocate");
    }
    else
    {
        for(i = 0; i < no_of_nums; i++)
        {
            scanf("%d", &*(ptr+i));
            total += *(ptr+i);
        }
        
        for(i = 0; i < no_of_nums; i++)
        {
            printf("%d, ", *(ptr+i));
        }
        printf("\nTotal:%d", total);
        free(ptr);
    }
    
    flushall();
    getchar();
    return 0;
}
        
        