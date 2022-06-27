#include <stdio.h>
#include <stdlib.h>
/**
 * main - display multiplication  of arg
 * @argc:int
 * @argv:string
 * Return:int
 */
int main(int argc, char *argv[] )
{
	int i; 
	char sum = 1;

	if (argc < 3)
	{
		 printf("Error\n");
		 return (1);
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			sum = sum * atoi(argv[i]);
		}
	}	
	printf("%d\n", sum);

	return (0);
}
