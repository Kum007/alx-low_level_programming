#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int a = 0;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (0);

	while (a < size)
	{
		*(ptr + a) = c;
		a++;
	}

	*(ptr + a) = '\0';

	return (ptr);
}
