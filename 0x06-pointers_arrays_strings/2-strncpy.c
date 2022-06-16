#include "main.h"
/**
 * _strncpy - copy a string
 * @dest: char
 * @src: char
 * @n: intiger
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		*dest = *(src + i);
		*dest++;
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (s);
}
