#include "main.h"
#include <stdlib.h>
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *str;

	if(size == 0)
	{
		return(NULL);
	}
	
	str = malloc(sizeof(char) * size);
	
	if(str == NULL)
	{
		return(0);
	}	
	
	for(i = 0; i < size; i++)
	{
		*(str + i) = c;
	}
	
	*(str + i) = '\0';

	return(str);

}
