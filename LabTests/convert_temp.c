/* Name: Seán Hampson
    Date: 20-02-2020   
    Program allows user to convert celsius to fahrenheit and vice versa
    it runs once as no loop is included
*/
#include <stdio.h>

// Function signatures
double fah_to_cel(double);
double cel_to_fah(double);

int main()
{
    int choice;
    double temp, converted_temp;

    // Choose which conersion function to run
    printf("1. Fahrenheit to celsius\n2. Celsius to Fahrenheit\n: ");
    scanf("%d", &choice);

    // Clears buffer
    //while(getchar() != "\n");

    switch(choice)
    {
        case 1:
        {
            printf("\nTemperature in Fahrenheit to be converted to Celsius: ");
            scanf("%lf", &temp);

            // Clears buffer
            //while(getchar() != "\n");

            converted_temp = fah_to_cel(temp);

            printf("\n%f degrees Fahrenheit is equal to: %f degrees Celsius", temp, converted_temp);

            break;
        }

        case 2:
        {
            printf("\nTemperature in Celsius to be converted to Fahrenheit: ");
            scanf("%lf", &temp);

            // Clears buffer
            //while(getchar() != "\n");

            converted_temp = cel_to_fah(temp);

            printf("\n%f degrees Celsius is equal to: %f degrees Fahrenheit", temp, converted_temp);

            break;
        }

        default:
        {
            printf("\nInvalid choice program will now end\n");
            break;
        }
    }

    flushall();
    getchar();
    return 0;
}

double fah_to_cel(double fah)
{
    //(f-32) / 1.8 = c
    double celsius;

    celsius = (fah - 32) / 1.8;

    return celsius;
}

double cel_to_fah(double cel)
{
    //f = 1.8c + 32
    double fahr;

    fahr = (cel * 1.8) + 32;

    return fahr;
}
