#include "main.h"

/**
 * print_numbers - Prints the numbers from 0-9.
 * @c: refrence
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= 9; c++)
	{
		_putchar(c);
	}

	_putchar('\n');
}
