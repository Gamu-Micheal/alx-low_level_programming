#include "main.h"
#include <stdio.h>

/**
 * _strlen - Function that returns the lenth of a string.
 *
 * @s: String to check lenth
 *
 * Return: Returns the size of the string
 */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i] != 0)
	{
		len++;
		i++;
	}

	return (len);
}
