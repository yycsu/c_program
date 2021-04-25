#include <stdio.h>

int zxgb(int a, int b);

int main()
{
	int i, j, k, l, m, n;

	printf("please enter two number:\n");
	scanf("%d%d%d%d", &i, &j, &k, &l);

	m = zxgb(i, j) / j * i;
	n = zxgb(k, l) / l * k;

	if(m > n)
		printf("%d/%d > %d/%d\n", i, j, k, l);
	else if (m == n)
		printf("%d/%d = %d/%d\n", i, j, k, l);
	else
		printf("%d/%d < %d/%d\n", i, j, k, l);\
	return 0;
}

int zxgb(int a, int b)
{
	int c, d;

	if (a < b)
	{
		c = a;
		a = b;
		b = c;
	}

	for (c = a * b; b != 0;)
	{
		d = b;
		b = a % b;
		a = d;
	}
	return (int) c/a;

}