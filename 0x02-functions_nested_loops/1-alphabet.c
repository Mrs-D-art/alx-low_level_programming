#include "main.h"
#include <unistd.h>

/**
 * main - print alphabet
 */

void print_alphabet(void);
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);

		_putchar('\n');
	}
}
