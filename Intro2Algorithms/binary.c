#include <stdio.h>

int main()
{
	int num, quotient, remainder;

	printf("Enter a number to be converted to binary: ");

	fflush(stdout);
	scanf("%d", &num);

	do
	{
		quotient  = num / 2;
		remainder = num % 2;

		printf("%d", remainder);
		num = quotient;

	}while(quotient != 0);

	return 0;
}
