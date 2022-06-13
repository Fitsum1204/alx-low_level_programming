#include "main.h"
#include <stddef.h>
/**
 * _strlen -> count number of character in a string
 * @s: point to string
 * return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);	
}
