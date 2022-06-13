#include "main.h"
#include <stdio.h>

/**
 * swap_int - a function that swap the value of two integers.
 *
 * @a: First param to be swapped
 * @b: Second param to be swapped
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
