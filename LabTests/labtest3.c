/* Name: Sean Hampson C19301641
   Date: 20-02-2020
   Description:
*/
#include <stdio.h>
#define NUM 3

// Variable signatures
float change_to_Euro(float[]);
float change_to_Dollar(float[]);

int main()
{
	int choice, option;
	float amount[NUM], average;

	do
	{
		// Menu
		printf("1. Change to Euro\n2. Change to Dollar\n");
		printf("Please choose a conversion: ");

		scanf("%d", &choice);
		// Clears buffer
		while(getchar() != '\n');

		switch(choice)
		{
			case 1:
			{
				printf("\nPlease enter 3 amounts you'd like to convert: ");
				scanf("%f %f %f", &amount[0], &amount[1], &amount[2]);
				// Clears buffer
				while(getchar() != '\n');	

				average = change_to_Euro(amount);
				printf("\nAverage: %.2f euro", average);

				break;
			}
			case 2:
			{
				printf("\nPlease enter 3 amounts you'd like to convert: ");
				scanf("%f %f %f", &amount[0], &amount[1], &amount[2]);
				// Clears buffer
				while(getchar() != '\n');

				average = change_to_Dollar(amount);
				printf("\nAverage: %.2f dollars", average);

				break;
			}
			default:
			{
				printf("\nInvalid option!\n");
				break;
			}
		}

		printf("\n\n1. Continue Program\n2. End Program\n>");
		scanf("%d", &option);
		// Clears buffer
		while(getchar() != '\n');
	}while(option == 1);

	//flushall(); borland
	fflush(stdout); //windows
	getchar();
	return 0;
}

float change_to_Euro(float amount[])
{
	// Converts US Dollars into Euro
	// $1 = €0.84
	int i, j, u;
	float amount_in_euro[NUM], average, total;	

	for(j = 0; j < 3; j++)
	{
		// Finds total of all amounts to be converted
		amount_in_euro[j] = amount[j] * 0.84;
	}

	// Compute total of 3 converted amounts
	for(i = 0; i < 3; i++)
	{
		// Converts all 3 amounts
		total += amount_in_euro[i];
	}

	// Print original amount converted amount
	for(u = 0; u < 3; u++)
	{
		// Finds total of all amounts to be converted
		printf("\n$%.2f = %.2f euro", amount[u], amount_in_euro[u]);
	}

	// Average of 3 computed amounts
	average = total / 3;
	
	return average;
}

float change_to_Dollar(float amount[])
{
	// Converts Euro into US Dollars
	// €1 = $1.19
	int i, j, u;
	float amount_in_dollar[NUM], average, total;
	
	for(j = 0; j < 3; j++)
	{
		// Converts all 3 amounts
		amount_in_dollar[j] = amount[j] * 1.19;
	}

	// Compute total of 3 converted amounts
	for(i = 0; i < 3; i++)
	{
		// Finds total of all amounts to be converted
		total += amount_in_dollar[i];
	}

	// Print original amount converted amount
	for(u = 0; u < 3; u++)
	{
		// Finds total of all amounts to be converted
		printf("\n%.2f euro = $%.2f", amount[u], amount_in_dollar[u]);
	}

	// Average of 3 computed amounts
	average = total / 3;

	return average;
}