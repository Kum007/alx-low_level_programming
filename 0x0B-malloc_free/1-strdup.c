#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *dpl;
	int a, len;

	a = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dpl = malloc(sizeof(char) * (len + 1));

	if (dpl == NULL)
		return (NULL);

	while ((dpl[i] = str[i]) != '\0')
		i++;

	return (dpl);
}
