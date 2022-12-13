#include "main.h"

/**
 * _isalpha - check is it is an alphabet
 * @c: the charater
 * Return: 1 if yes 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
