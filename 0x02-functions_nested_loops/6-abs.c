#include "main"

/**
 * _abs - absolute value
 * Return: always 0
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	_putchar(n);
}
