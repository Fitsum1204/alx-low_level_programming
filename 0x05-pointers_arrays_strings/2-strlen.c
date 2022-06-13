#include "main.h"
#include <stddef.h>
/**
 * _strlen -> count number of character in a string
 * @s: point to string
 */
int _strlen(char *s)
{
	int i = 0;

	while(*(s + i) != NULL)
	{
		i++;
	}
	return i;	
}
