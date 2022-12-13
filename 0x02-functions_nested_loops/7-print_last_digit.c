#include "main.h"

/**
 * print_last_digit - print last digit
 * @n: the interger
 * Return: 0
 */
int print_last_digit(int n)
{
	int ld = n % 10;

	if (n < 0)
		ld *= -1;
	_putchar(ld + '0');

	return (0);

}
