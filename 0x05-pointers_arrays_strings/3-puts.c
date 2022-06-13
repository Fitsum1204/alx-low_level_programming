#include "main.h"
/**
 * puts -> prints a string
 * @str: point to pointer
 */
void _puts(char *str)
{
	int i=0;
	while (str != '\0')
	{
		putchar( str);
		str++;
	}
}
