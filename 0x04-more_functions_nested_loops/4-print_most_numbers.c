#include "main.h"
/**
 * print_most_numbers - prints most numbers aside 2 & 4
 * Return: 0
 * i: is a number
 **/
void print_most_numbers(void)
{
	int i:

	for (i = 0; i < 10; i++)
	{
	if (i != 2 && i != 4)
	{
		_putchar(i + '0');
	}
	}
	_putchar('\n');

}
