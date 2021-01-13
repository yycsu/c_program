#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, d, x;

	int flag = 0;

	while (flag != 1)
	{
		a = (x + 1) /2;

		b = (x - a + 1) / 3;

		c = (x - a- b + 1) / 4;

		d = (x - a - b - c + 1) / 5;

		if (x - a  - b - c - d == 11)
		{
			flag = 1;
			break;
		}
		x++;
	}

	printf("the value is: %f\n", x);
	return 0;
}