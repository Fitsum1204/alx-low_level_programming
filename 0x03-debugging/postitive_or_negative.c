#include "main.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main.h - prints if integer is positive or negative
 * Return: 0
 */
void  positive_or_negative(int i)
{
	int n;

	n = i;

	if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is positive\n", n);

}

