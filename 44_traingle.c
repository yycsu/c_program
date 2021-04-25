#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, c, count = 0;
	printf("100以内的勾股数有:\n");
	printf("   a    b    c      a    b    c      a    b    c      a    b    c    \n");

	for (a= 1; a <= 100; a++)
	{
		for (b = a + 1; b <=100; b++)
		{
			c = (int)sqrt(a*a + b*b);
			if (c * c  == a * a + b * b && a + c > b && b + c > a && c <=100)
			{
				printf("%4d %4d %4d   ", a, b, c);
				count++;
				if (count % 4 == 0)
					printf("\n");
			}
		}
	}

	printf("\n");
	return 0;
}