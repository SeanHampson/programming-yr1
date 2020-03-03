/* Q4 Lab13
    Name: Seán Hampson
    Date: 13-02-20
    Brief Discription:
       Displays the most commonly used character
       of 3 that are inputted by user
*/
#include <stdio.h>
#define NUM 3

char common_char(char, char, char);

int main()
{
    char char1, char2, char3;
    char most_common;
    
    printf("Enter character 1: ");
    scanf("%d", &char1);
    printf("Enter character 2: ");
    scanf("%d", &char2);
    printf("Enter character 3: ");
    scanf("%d", &char3);
    
    most_common = common_char(char1, char2, char3);
    printf("\nThe most common character is %c", most_common);
    
    flushall();
    getchar();
    return 0;
}

char common_char(char c1, char c2, char c3)
{
    char most_common;
    
    //Check how common c1 is
    if( c1 == c2 )
    {
        most_common = c1;
    }
    //Check how common c2 is
    else if( c2 == c3 )
    {
        most_common = c1;
    }
    //Check how common c3 is
    else if( c3 == c1 )
    {
       most_common = c1; 
    }
    
    return most_common;
}



