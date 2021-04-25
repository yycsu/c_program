#include <stdio.h>

int main()
{
	int i, n, t, later, count, temp, temp2;

	for(n = 0; n < 100000; n++)
	{
		temp = n;
		count = 0;
		later = 0;

		for (i = 0; temp != 0; i++)
		{
			count += 1;
			temp /= 10;
		}

		temp2 = n * n;
		t = 1;

		for (i = 0; i < count; i++)
		{
			later += temp2 % 10 * t;
			temp2 = temp2 / 10;
			t *= 10;
		}

		if (later == n)
			printf("the better value is: %d\n", n);
	}

	return 0;
}