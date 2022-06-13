#include "main.h"
/**
 * puts -> prints a string
 * @str: point to pointer
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar( *str);
		*str++;
	}
}
