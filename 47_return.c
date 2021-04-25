#include <stdio.h>
#include <math.h>

int main()
{

	int m[16], i , n, k, a, t, index = 0;

	printf("No.    number  it's square\n");

	for (n = 1; n < 256; n++)
	{
		k = 0;
		t = 1;
		a = n * n;

		for (i = 0; a != 0; i++)
		{
			m[i] = a % 10;
			a = a / 10;
		}

		for (; i > 0; i--)
		{
			k += m[i-1] * t;
			t *= 10;
		}

		if (k == n*n)
		{
			printf("%2d%10d%10d\n",index, n, k);
			index++;
		}

	}

	return 0;

}