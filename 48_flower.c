#include <stdio.h>
#include <math.h>

int main()
{
	int i, j, n, m[5], total, temp;

	for (n = 100; n < 1000; n++)
	{
		total = 0;
		temp= n;

		for (i = 0; temp!=0;i++)
		{
			m[i] = temp %10;
			temp = temp /10;
		}

		for (j = 0; j < 3; j++)
		{
			total += m[j] * m[j] * m[j];
		}

		if (total == n)
			printf("digit %d is a flower digit\n", n);
	}

	return 0;
}