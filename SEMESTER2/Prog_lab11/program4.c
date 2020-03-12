#include <stdio.h>
#include <stdlib.h>
#define SIZE 8

int main()
{
    char chars[] = {'a', ' ', 'b', ' ', 'c', ' ', ' ', 'd'};
    char *ptr = chars;
    int i;
    
    for(i = 0; i < SIZE; i++)
    {
        if(*(ptr+i) == ' ')
        {
            *(ptr+i) = '_';
        }
    }
    
    for(i = 0; i < SIZE; i++)
    {
        printf("%c, ", *(ptr+i));
    }
    free(ptr);
    
    flushall();
    getchar();
    return 0;
}