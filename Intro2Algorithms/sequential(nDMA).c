#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM1 10
#define NUM2 100
#define NUM3 1000

int main()
{
    int i, choice, counter, start_index, index;
    int array_m10[NUM1], array_n10[NUM1];
    int array_m100[NUM2], array_n100[NUM2];
    int array_m1000[NUM3], array_n1000[NUM3];
    time_t t;

    /* Intializes random number generator */
    srand((unsigned) time(&t));

    printf("Choose an option\n1. Size 10 array\n2. Size 100 array\n3. Size 1000 array\n: ");
    scanf("%d", &choice);
    while(getchar() != '\n');
    fflush(stdout);

    switch(choice)
    {
        case 1:
        {
            /* Generates random numbers from 0 to 10 for each array */
            for(i = 0; i < NUM1; i++)
            {
                array_m10[i] = rand() % 10;
                array_n10[i] = rand() % 10;
            }

            // Counts how many numbers are similar
            counter = 0;
            // Index counter
            index = 0;
            // First number in the M array
            start_index = array_m10[index];

            for(i = 0; i < NUM1; i++)
            {
                if( start_index == array_n10[i] )
                {
                    counter++;
                    printf("%d, ", start_index++);
                }
            }
            printf("are similar in both arrays\n Total similar numbers: %d", counter);
        }

        case 2:
        {
            /* Generates random numbers from 0 to 10 for each array */
            for(i = 0; i < NUM2; i++)
            {
                array_m100[i] = rand() % 100;
                array_n100[i] = rand() % 100;
            }

            // Counts how many numbers are similar
            counter = 0;
            // Index counter
            index = 0;
            // First number in the M array
            start_index = array_m100[index];

            for(i = 0; i < NUM2; i++)
            {
                if( start_index == array_n100[i] )
                {
                    counter++;
                    printf("%d, ", start_index++);
                }
            }
            printf("are similar in both arrays\n Total similar numbers: %d", counter);
        }

        case 3:
        {
            /* Generates random numbers from 0 to 10 for each array */
            for(i = 0; i < NUM3; i++)
            {
                array_m1000[i] = rand() % 1000;
                array_n1000[i] = rand() % 1000;
            }

            // Counts how many numbers are similar
            counter = 0;
            // Index counter
            index = 0;
            // First number in the M array
            start_index = array_m1000[index];

            for(i = 0; i < NUM3; i++)
            {
                if( start_index == array_n1000[i] )
                {
                    counter++;
                    printf("%d, ", start_index++);
                }
            }
            printf("are similar in both arrays\n Total similar numbers: %d", counter);
        }

        default:
        {
            printf("Invalid Option!\n");
            break;
        }
    }

    getchar();
    return 0;
}