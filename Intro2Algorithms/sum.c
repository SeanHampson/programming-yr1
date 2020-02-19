/* Name: Sean Hampson
   Date: 18-02-2020
   Computes the sum of a given mathematical function
   with the use ofa for loop
*/
#include <stdio.h>

int main()
{
	//For loop counter variable
	int i;
	//Sum total variable
	double sum = 0;
	int n = 100;

	for(i = 1; i < n+1; i++)
	{
		//Mathematical function to compute the sum
		sum += 1.0 / (double) i;
	}

	printf("\n\nSum is %f", sum);

	getchar();
	return 0;
}
