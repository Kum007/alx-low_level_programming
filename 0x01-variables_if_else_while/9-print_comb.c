#include <stdio.h>
/**
 * main - This is the main
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
	putchar(a + '0');
	putchar(',');
	}
	putchar('\n');

	return (0);
}
