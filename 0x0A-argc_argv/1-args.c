#include <stdio.h>
/**
 * main - display number of arguments
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else 
	{
		printf("%d\n", (argc-1) );
	}
	return (0);
}
