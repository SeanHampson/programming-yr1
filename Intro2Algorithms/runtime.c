/* Name: Sean Hampson
   Date: 18-02-2020
   Computes the sum of a given mathematical function
   When n = 10**2, 10**3... 10**6 the program will 
   print total running time upto that point
*/
#include <stdio.h>
#include <math.h>
#include <time.h>

double sum(int);

int main()
{
	//Counter variable for for loop which is used to call sum function
	int i;
	//Variable which'll hold return value of sum function
	double sum_math;

	for( i = 2; i < 7; i++ )
	{
		//Variable holds value of fucntion after i(N) is passed to it
		sum_math = sum( (double)i );
		printf("Sum is %f, N = %d\n", sum_math, i);
	}

	getchar();
	return 0;
}


double sum(int power)
{
	int i;
	//Sum variable holds total sum
	double sum = 0;

	//Clock time starts at beginning of program
	clock_t start = clock();

	for(i = 1; i < (pow(10, power)+1); i++)
	{
		sum += 1.0 / (double)i;
	}

	clock_t current   = clock();
	double time_spent = (double)(current - start) / CLOCKS_PER_SEC;
	
	printf("Running time when N = %d: %f seconds\n", power, time_spent);	

	return sum;
}
