#include "main.h"
int _sqrt(int n, int j)
{
if (j * j ==  n)
	{
	return(j);
	}
if (j * j > n)
	{
	return(-1);
	}
return(_sqrt(n, j + 1));
}

int _sqrt_recursion(int n)
{
if (n < 0)
	{
	return(-1);
	}
else
	{
	return(_sqrt(n, 0));
	}

}
