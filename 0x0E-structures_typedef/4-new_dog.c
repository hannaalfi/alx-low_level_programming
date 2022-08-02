#include "dog.h"
#include <stdlib.h>
/**
  * _strlen - returns the length of a string
  * @s: takes in a string
  * Return: i, string length
  */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
  * _strcpy - copies a string
  * @dest: destionation of string
  * @src: source of string
  * Return: return the destination string
  */
char *_strcpy(char *dest, char *src)
{
	int i, c;

	for (c = 0; src[c] != '\0'; c++)
		;
	for (i = 0; i < c; i++)
		dest[i] = src[i];
	return (dest);
}
/**
  * new_dog - function that creates a new dog
  * @name: dog's name
  * @age: dog's age
  * @owner: dog's owner
  * Return: a copy of name and owner of new dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	char *new_name, *new_owner;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	new_name = malloc(sizeof(char) * _strlen(name) + 1);
	if (new_name == NULL)
	{
		free(dog);
		return (NULL);
	}
	_strcpy(new_name, name);
	new_owner = malloc(sizeof(char) * _strlen(owner) + 1);
	if (new_owner == NULL)
	{
		free(new_name);
		free(dog);
		return (NULL);
	}
	_strcpy(new_owner, owner);
	dog->name = new_name;
	dog->age = age;
	dog->owner = new_owner;
	return (dog);
}
