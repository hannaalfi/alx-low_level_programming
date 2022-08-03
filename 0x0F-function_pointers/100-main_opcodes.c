#include <stdio.h>
#include <stdlib.h>
/**
  * main - entry block
  * @argc: number of arguments
  * @argv: arguments array
  * Return: 0
  */
int main(int argc, char **argv)
{
	int i, bytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}
	for (i = 0; i < (bytes - 1); i++)
	{
		if (bytes != 0)
			printf("%02hhx ", ((char *)main)[i]);
	}
	printf("%02hhx\n", ((char *)main)[i]);
	return (0);
}
