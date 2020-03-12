/*
    This programs uses a function 
    in order to print 10 stars
*/

#include <stdio.h>
#define NUM 10

void stars(int);

int main()
{
    stars(NUM);
    
    getchar();
    return 0;
}

void stars(int no_of_stars)
{
    int i;
    
    for(i = 0; i < no_of_stars; i++)
    {
        printf("*");
    }
}

