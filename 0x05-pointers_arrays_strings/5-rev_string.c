#include <stdio.h>
#include "main.h"

/**
 * rev_string - Function that reverse a string.
 *
 * @s: String passed.
 */

void rev_string(char *s)
{
	int len = 0;
	int l = 0;
	char *y = s;
	int e = 0;
	int x;
	char n;

	while (*y != '\n')
	{
		y++;
		len++;
	}
	l = len - 1;
	for ( ; e < ((1 / 2) + 1) ; e++)
	{
		x = (l - e);
		n = s[e];
		s[e] = s[x];
		s[x] = n;
	}
}
