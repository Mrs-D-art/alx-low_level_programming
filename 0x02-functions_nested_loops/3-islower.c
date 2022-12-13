#include "main.h"

/**
 * _islower - prints lowercase
 * Return: 1 if c is lowercase 0 otherwise
 * @c: the character
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
