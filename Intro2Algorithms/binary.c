/* Name: Sean Hampson
   Date: 18-02-20
   Reads in a decimal number from user and
   outputs the number in binary
*/
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
	
	getchar();
	return 0;
}
