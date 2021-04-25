#include <stdio.h>

int main()
{
	int a, b, c;
	for (a = 0; a <= 50;a++)
	{
		for (b = 0; b <= 50 - a;b++)
		{
			for (c = 0; c <= 50 - a - 0.5 * b;c++)
			{
				if (a + 0.5 * b + 0.1 * c == 5)
					printf("%5d 个1元，%5d个5角，%5d个1角可以组成5元\n", a, b, c);
			}
		}
	}

	return 0;
}