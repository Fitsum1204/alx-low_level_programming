#include <unistd.h>
#include <stdio.h>
#include "main.h"
/**
* main - prints _putchar
* Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
int main(void)
{

	int i = 0;
	char str[10]={'_','p','u','t','c','h','a','r','\n'};
	while (i < 10)
	{
	_putchar (str[i]);
	i++;
	}	

	return (0);
}
