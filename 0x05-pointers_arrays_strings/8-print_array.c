#include "main.h"
#include <stdio.h>
/**
* print_array - function that prints n elements of an array of integers,
*               followed by a new line.
* @a: pointer type int
* @n: type int
* Return: Always 0 (Success)
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (*(a) != 0)
			printf("%d", *(a++));
		else
			break;
		if (i < (n - 1) && *(a) != 0)
			printf(", ");
	}
	printf("\n");
}
