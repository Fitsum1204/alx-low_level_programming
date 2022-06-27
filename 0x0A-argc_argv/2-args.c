#include <stdio.h>
/**
 * main - display num of arg
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	for(i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
