#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    /*  Choose size of first array 
        Choose size of second array
        Fill both arrays wih randoms integers
        See how many integers are the same
    */
    int i, j, m, n;

    /* Intializes random number generator */
    srand((unsigned int) time(NULL));

    /* Custom size for 1st array */
    printf("Please choose size of array m:\n> ");
    scanf("%d", &m);
    /* Clears buffer */
    while(getchar() != '\n');

    /* Custom size for 1st array */
    printf("Please choose size of array n:\n> ");
    scanf("%d", &n);
    /* Clears buffer */
    while(getchar() != '\n');

    int array_m[m];
    int array_n[n];

    for(i = 0; i < m; i++)
    {
        array_m[i] = rand() % m;
    }

    for(i = 0; i < n; i++)
    {
        array_m[i] = rand() % n;
    }

    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d | %d\n", array_m[i], array_n[j]);
        }
    }

    //printf("are similar numbers\n");

    getchar();
    return 0;
}