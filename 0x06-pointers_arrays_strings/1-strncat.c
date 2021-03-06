#include "main.h"
/**
 * _strncat - concat 2 string useing n bytes
 * @dest: char
 * @src: char
 * @n:length int
 * Return:char
 */
char *_strncat(char *dest, char *src, int n)
{
	char *s = dest;
	int i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = *(src + i);
		dest++;
	}
	*dest = '\0';
	return (s);
}
