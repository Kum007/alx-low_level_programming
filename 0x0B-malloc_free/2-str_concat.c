#include <stdlib.h>
#include "main.h"

char *str_concat(char *s1, char *s2)
{
	int i,j,len_s1,len_s2;
	char *s3;

	while(s1[len_s1])
	{
		len_s1++;
	}

	while(s2[len_s2])
	{
		len_s2++;
	}

	s3 = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	
	if (s3 == NULL)
	{
		return(NULL);
	}

	i = 0;
	while(s1[i] != '\0')
	{
		i++;
	}
	for(j = 0; s2[j] != '\0'; i++,j++)
	{
		s3[i] = s1[i] = s2[j];
	}

	s3[i] = '\0'; 

	return(s3);
}
