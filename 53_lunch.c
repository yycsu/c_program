#include <stdio.h>

int main()
{
	int a, b, c;
	for (a = 0; a <= 30;a++)
	{
		for (b = 0; b <= 30 - a;b++)
		{
			c = 30 - a - b;
			if (3 *a + 2 * b + c == 50)
				printf("%5d 个男人，%5d个女人，%5d个小孩\n", a, b, c);
		}
	}

	return 0;
}