/* Name: Sean Hampson
   Date: 12/03/2020
   Reads in a string and counts the number of vowels
   and characters in the string. Also concatenates
   this string onto the end of a hardcoded string.
*/
#include <stdio.h>
#include <string.h>

/* Function Signatures */
int vowel_count(int*);
int char_count(int*);
void cat_string(int*);

int main()
{
    /* Variable to store user input */
    char string[40] = {0};

    /* Reads in string from user */
    printf("Enter a string:\n");
    gets(string);

    /* Functions calls with output for user to see */
    printf("\nNumber of vowels present: %d\n", vowel_count(string));
    printf("Number of characters present(including spaces): %d\n", char_count(string));
    cat_string(string);

    /* Holds window open for use */
    getchar();
    return 0;
}// END main()

int vowel_count(int* array)
{
    /* For loop counter and vowel counter */
    int i, counter = 0;
    /* Length of string */
    int length = strlen(array);

    for(i = 0; i < length; i++)
    {
        /* Allows for both upper and lower to be checked */
        char c = toupper( *(array + i) );
        
        // a, e, i, o, u
        if( c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' )
        {
            counter++;
        }//END IF
    }// END FOR
    return counter;
}// END vowel_count()

int char_count(int* array)
{
    return strlen(array);
}// END char_count()

void cat_string(int* array)
{
    /* Given string */
    char sentence[40] = "I entered the string ";

    /* Concatenates strings together */
    strcat(sentence, array);

    /* Outputs concatenated string */
    puts(sentence);
}// END cat_string()