#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry
 * Return: 0
 */
int main(void)
{
	int c = '0';
	int d = '0';
	int e = '0';

	for (e = '0'; e <= '9'; e++)
	{
		for (d = '0'; d <= '9'; d++)
		{
			for (c = '0'; c <= '9'; c++)
			{
			if (!((c == d) || (d == e) || (d > c) || (e > d)))
			{
				putchar(e);
				putchar(d);
				putchar(c);

				if (!(c == '9' && e == '7' && d == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			}
		}
	}
putchar('\n');
return (0);
}
