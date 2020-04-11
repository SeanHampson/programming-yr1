/*Reads in 3 integers and determines whether or not they could form
    a valid triangle
    Author: Seán Hampson
    Date: 14-10-2019
*/
#include <stdio.h>

int main()
{
    int side1, side2, side3;
    
    printf("Enter 3 side lengths separated by spaces: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if(side1 + side2 > side3)
    {
        printf("You can form a valid triangle with these side lengths\n");
    }
    else if(side1 + side3 > side2)
    {
        printf("You can form a valid triangle with these side lengths\n");
    }
    else if(side2 + side3 > side1)
    {
        printf("You can form a valid triangle with these side lengths\n");
    }
    else
    {
        printf("You can't form a valid triangle with these side lengths\n");
    }
    
    flushall();
    getchar();
    
    return 0;
}