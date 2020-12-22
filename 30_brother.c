#include <stdio.h>
#include <math.h>

int prime(int n)
{
	int i, k;
	k = sqrt(n) + 1;

	for (i = 2; i < k; i++)
	{
		if (n % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int i, e = 0;

	for (i = 3; i <= 1000; i++)
	{
		if (prime(i) && prime(i + 2))
		{
			e++;
			printf("(%d, %d)  \t", i, i+2);
			if(e % 5 == 0)
				printf("\n");
		}
	}

	printf("3-1000以内所有的孪生素数一共有%d对.\n", e);
	return 0;
}