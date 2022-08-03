#include "function_pointers.h"
/**
  * array_iterator - executes a func given as a param on array elem
  * @array: takes in an array
  * @size: takes in the size
  * @action: function pointer
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
