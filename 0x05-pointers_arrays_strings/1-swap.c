#include "main.h"
/**
 * swap_int -> function that swaps the values of two integers
 * @a:  pointer point to int a 
 * @b;  pointer point to int b
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
