#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i,finalSum;
	int sum = 0;
	for(i = 1; i < argc; i++)
	{
		sum += atoi(argv[i]);
		finalSum = sum;
		printf("%d\n",finalSum);
	}
	if(argc == 0)
	{
	printf("0");
	}
	if(i >= 'a' && i <= 'z')
	{
	printf("Error");
	}

	return(1);
	



}



