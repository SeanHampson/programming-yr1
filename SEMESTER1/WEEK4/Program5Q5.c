/*Takes users age as input and displays the amount of
    times the users heart has beated in their whole life
    Author: Seán Hampson
    Date: 07-10-19
*/
#include <stdio.h>

int main()
{
    int age, bpl;
    int bpy = 365 * 24 * 60 * 75;
    
    printf("Please enter your age: ");
    scanf("%d", &age);
    
    bpl = bpy * age;
    
    printf("Your heart has beated %d times in your lifetime!\n", bpl);
    
    flushall();
    getchar();
    
    return 0;
}