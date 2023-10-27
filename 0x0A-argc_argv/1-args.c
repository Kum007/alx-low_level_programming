#include <stdio.h>
int main(int argc, char *argv[])
{
	int count;
	if (argc < 0)
	{
		for (count = 1; count < argc; count++)
		{
		printf("argv[%d] = %s\n", count, argv[count]);
		}
	}
	printf("%d\n",argc - 1);

	return(0);
}
