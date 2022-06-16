#include "main.h"
/**
 * _strcat
 *
 */
char *_strcat(char *dest, char *src)
{
	int i;
	char *s= dest;
	while (*dest != '\0')
		dest++;
	dest++;
	for (int i= 0; *src != '\0';i++)
	{
		*(dest + i) = *src;
			src++;
	}
	*dest = '\0';
	return (s);
}
