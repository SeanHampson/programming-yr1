/* Name: Sean Hampson
   Date: 12/03/2020
   Reads in a string and counts the number of vowels
   and characters in the string. Also concatenates
   this string onto the end of a hardcoded string.
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Function Signatures */
int vowel_count(char*);
int char_count(char*);
void cat_string(char*);

int main()
{
    /* Variable to store user input */
    char string[40] = {0};
    /* Variables to hold function return values */
    int no_of_vowels;   
    int no_of_chars;

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

int vowel_count(char* array)
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

int char_count(char* array)
{
    return strlen(array);
}// END char_count()

void cat_string(char* array)
{
    /* Given string */
    char sentence[40] = "I entered the string ";

    /* Concatenates strings together */
    strcat(sentence, array);

    /* Outputs concatenated string */
    puts(sentence);
}// END cat_string()