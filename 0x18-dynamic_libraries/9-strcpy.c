#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest
 *
 * @dest: pointer char void
 * @src: pointer char source
 *
 * Return: The pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, j = 0;

	while (src[j])
		j++;

	for (i = 0; i <= j; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
