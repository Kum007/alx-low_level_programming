#include "main.h"
int _strlen_recursion(char *s)
{
int a = 1;
if (*s == 0)
	{
	return(0);
	}
else
	{
	return(a + _strlen_recursion(s + 1));
	}


}
