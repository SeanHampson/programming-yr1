/* Q2. Q11 Lab11
    Calculate and display miles/litre from the 
    given miles array and litres array
*/
#include <stdio.h>

int main()
{
    //Given arrays in question
    float litres[] = {11.5, 11.21, 12.7, 12.6, 12.4};
    float miles[] = {471.5, 358.72, 495.3, 453.6, 421.6};
    int mpl[5];
    int i;
    
    for(i = 0; i < 5; i++)
    {
        *(mpl + i) = *(miles + i) / *(litres + i);
        printf("%d miles per litre\n", *(mpl + i));
    }
    
    getchar();
    return 0;
}