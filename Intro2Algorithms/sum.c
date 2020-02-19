/* Name: Sean Hampson
   Date: 18-02-2020
   Computes the sum of a given mathematical function
*/
#include <stdio.h>

int main()
{
	int i;
	double sum = 0;
	int n = 100;

	for(i = 1; i < n+1; i++)
	{
		sum += 1.0 / (double) i;
	}

	printf("\n\nSum is %f", sum);

	getchar();
	return 0;
}
