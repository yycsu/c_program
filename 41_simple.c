#include <stdio.h>
#include <math.h>


int zxgb(int a, int b)
{
	long int c;
	int d;

	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}

	for (c = a * b; b!= 0;)
	{
		d = b;
		b = a % b;
		a = d;
	}
	return (int) (c/a);
}


int main()
{
	int i, temp, count = 0;
	for (i = 1; i<= 40; i++)
	{
		temp = zxgb(i, 40);
		if (temp == i * 40)
		{

			count += 1;
			printf("%d/%d", i, 40);
			if (count % 8 ==0)
				printf("\n");
			else
				printf("\t");
		}
	}
	return 0;
}