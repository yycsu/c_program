#include <stdio.h>
#include <math.h>

int prime(int n)
{
	int i, k;

	k = sqrt(n) + 1;

	for (i = 2; i <= k; i++)

		if (n % i == 0)
			return 0;
	return 1;
}

int main()
{
	int i, e = 0, mp;

	for (i = 2; i <= 20; i++)
	{
		mp = pow(2, i) - 1;

		if (prime(mp))
		{
			e++;
			printf("M(%d) = %d", i, mp);
			printf("\n");
		}
	}
	printf("\n");
	printf("the num of Semennse prime less than 20 is: %d\n", e);
	return 0;
}