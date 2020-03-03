/*
    Correcting delimters of 3 variables
    Author: Seán Hampson
    Date: 23-09-2019
*/
#include <stdio.h>

int main()
{
    int v1;
    float v2;
    char v3;
    
    v1 = 93;
    v2 = -45.3;
    v3 = 'd';
    
    printf("%d\n", v1);
    printf("%f\n", v2);
    printf("%c\n", v3);
    
    getchar();
    
    return 0;
}