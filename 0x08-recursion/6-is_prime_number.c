#include "main.h"
int prime_num(int n, int a)
{
if (a == 1)
	{
	return(1);
	}
if (a > 0 && n % a == 0 )
	{                                        
        return(0);                               
        }   
else
	{
	return(prime_num(n, (a - 1)));
	}
}
int is_prime_number(int n)
{
if (n <= 1)
	{
	return(0);
	}
else
	{
	return(prime_num(n, (n - 1)));
	}


}
