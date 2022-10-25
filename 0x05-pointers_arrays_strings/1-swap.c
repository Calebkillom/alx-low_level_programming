#include "main.h"

/**
* swap_int - swaps values of 2 integers
* @a: integer to swap
* @b: integer to swap
*/

void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
