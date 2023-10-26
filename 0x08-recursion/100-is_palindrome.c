#include "main.h"
int if_palindrome(char *s, int a, int len);
int _strlen(char *s);

int is_palindrome(char *s)
{
if(*s == 0)
	{
	return(0);
	}
else
	{
	return(0 + if_palindrome(s, 0, _strlen(s)));
	}
}

int if_palindrome(char *s, int a, int len)
{
if(*(s + len - 1) != *(s + a))
	{
	return(0);
	}
if(a >= len)
	{
	return(1);
	}
else
	{
	return(if_palindrome(s, a + 1 ,len - 1));
	}
}
int _strlen(char *s)
{
if (*s == '\0')
	{
	return(0);
	}
else
	{
	return(1 + _strlen(s + 1));
	}
}















