#include <stdio.h>

int main()
{
	int i, j, a, b, n;

	for(i = 1; i < 3000; i++)
	{
		a = 0;

		for (j = 1; j < i; j++)
		{
			if (i % j == 0)
			{
				a += j;
			}
		}

		b = 0;

		for (j = 1; j < a; j++)
		{
			if (a % j == 0)
			{
				b += j;
			}
		}

		if (i == b)
			printf("the nearest value is : %d\n", i);
	} 

	return 0;
}