#include "main.h"

/**
 * _strlen - length of string
 * @s: the string to be counted
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length++);
}
