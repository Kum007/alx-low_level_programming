#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int a;
	int len;
	char *dup;

	if(str == NULL)
	{
		return(NULL);
	}
	
	while(str[len])
	{
		len++;
	}

	dup = malloc(sizeof(char) * (len));
	
	for(a = 0; str[a] != '\0'; a++)
	{
		dup[a] =str[a];
	}
	dup[a] = '\0';

	return(dup);






}
