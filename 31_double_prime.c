#include <stdio.h>
#include <math.h>

int prime(int n)
{
	int i,k;

	k = sqrt(n) + 1;

	for(i = 2; i <=k; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i, e;

	for (i = 1; i <= 1000; i++)
	{
		if (i / 10 >= 1 && i / 100 < 1)
		{
			if (prime(i) && (i / 10 == i % 10))
			{
				printf("素数为%d\n", i);
			}
		}
		else if (i / 100 >= 1)
		{
			if(prime(i) && (i / 100 == i % 10))
			{
				printf("素数为%d\n", i);
			}
		}
	}
	return 0;
}