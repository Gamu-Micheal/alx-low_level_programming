#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints a random number and states whether
 * it is positive, negative, or zero.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	
		printf("%d is positive\n",n);
	
	else if (n < 0)
	
		printf("%d is negetive\n",n);
	
	else :	printf("%d is zero\n",n);
	
	retutn (0);
}
