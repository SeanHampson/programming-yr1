/* Name: Sean Hampson
   Date: 12/03/2020
   Reads in a string from user and counts the frquency of "is"
   in the string. The string is also compared to the string
   "Hello World".
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* Function Signatures */
int freq(char*, char*);
void compare(char*, char*);

int main()
{
    /* Variable to store user input */
    char string[40] = {0};

    /* Reads in string from user */
    printf("Enter a string:\n");
    gets(string);

    /* Functions calls with output for user to see */
    printf("\nFrequency of the string \"is\" in this string: %d\n", freq(string, "is"));
    compare(string, "test");

    /* Holds window open for use */
    getchar();
    return 0;
}// END main()

// (StringToBeChecked, String)
int freq(char* string1, char* string2)
{
    /* For loop counter and vowel counter */
    int i, counter = 0;
    /* Length of string */
    int length = strlen(string1);

    for(i = 0; i < length; i++)
    {
        if( i != length-1 )
        {
            if( toupper(*(string1 + i)) == 'I' || toupper(*(string1 + i + 2)) == 'S' )
            {
                counter++;
            }// END IF
        }// END IF
    }// END FOR
    return counter;
}// END freq()

// (StringToBeChecked, String)
void compare(char* string1, char* string2)
{

}// END compare()