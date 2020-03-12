/*
    Uses a function to print a specific character acertain number of times
*/
#include <stdio.h>

void display(char, int);

int main()
{
    display('*', 5);
    
    getchar();
    return 0;
}

void display(char letter, int no_of_times)
{
    int i;
    
    for(i = 0; i < no_of_times; i++)
    {
        printf("%c", letter);
    }
}