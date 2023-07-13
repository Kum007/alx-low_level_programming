#include <stdio.h>
/**
 * main -this the main
 * Return: 0
 */
int main(void)
{
	char c;
	int i;
	float f;

	printf("Size of a char: %c byte(s)\n", sizeof(c));
	printf("Size of an int: %i byte(s)\n", sizeof(i));
	printf("Size of a long int: %li byte(s)\n", sizeof(long i));
	printf("Size of a long long int: %lli byte(s)\n", sizeof(long long i));
	printf("Size of a float: %f byte(s)\n", sizeof(f));

	return (0);
}
