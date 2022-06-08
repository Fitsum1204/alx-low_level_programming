#include <unistd.h>
#include "main.h"
/**
* main - prints _putchar
* Return: Always 0 (Success)
*/

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
