#include "main.h"

/**
 * swap_int - swap intergers
 * @a: first interger
 * @b: second interger
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
