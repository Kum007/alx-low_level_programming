#include "main.h"
/**
 * positive_or_negative - program checks if number i is positive or negetive
 * @i: is a number
 * Return: 0
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
	printf("%d is positive\n", i);
	}
	else if (i < 0)
	{
	printf("%d is negative\n", i);
	}
	else
	printf("%d is zero\n", i);

}
