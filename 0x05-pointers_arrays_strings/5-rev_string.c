#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: The string to be reversed.
 */

void rev_string(char *s)
{
	int i = 0;
	int index = 0;
	char temp;

	while (s[index++])
		i++;

	for (index = i - 1; index >= len / 2; index--)
	{
		temp = s[index];
		s[index] = s[i - index - 1];
		s[i - index - 1] = temp;
	}
}
