#include "main.h"
#include <stdlib.h>
/**
  * _strlen - find length of string
  * @s: takes in string
  * Return: returns the length of the string
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * strtow - function that splits a string into words
  * @str: takes in string
  * Return: retusn a pointer to an array of strings(words)
  */
char **strtow(char *str)
{
	char **nstr;

	int i;

	if (str == NULL || str == "")
		return (NULL);
	nstr = malloc(sizeof(char *) * _strlen(str));
}
