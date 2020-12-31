#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp(const void *j , const void *i);

void p(int b[], char n[]);

int main()
{
	srand((unsigned)time(NULL));
	static char n[] = {'2', '3','4','5','6','7','8','9','T','J','Q','K','A'};

	int a[52], b1[13], b2[13], b3[13], b4[13];

	int b11=0, b22= 0, b33 = 0, b44 = 0, t = 0, i, m, flag;

	while(t < 52)
	{

		m = rand() % 52;
		for(flag = 1, i = 0; i< t&&flag; i++)
		{
			if (m == a[i])
				flag = 0;
		}

		if (flag)
		{
			a[t++] = m;
			if (t % 4 == 0)
				b1[b11++] = m;
			else if (t % 4 == 1)
				b2[b22++] = m;
			else if (t % 4 == 2)
				b3[b33++] = m;
			else if (t % 4 == 3)
				b4[b44++] = m;
		}
	}

	qsort(b1, 13, sizeof(int), comp);
	qsort(b2, 13, sizeof(int), comp);
	qsort(b3, 13, sizeof(int), comp);
	qsort(b4, 13, sizeof(int), comp);

	p(b1, n);
	p(b2, n);
	p(b3, n);
	p(b4, n);

	return 0;
}

int comp(const void *j , const void *i)
{
	return (*(int*)i - *(int *)j);
}

void p(int b[], char n[])
{
	int i;
	printf("\n\002 ");
	for (i = 0; i < 13; i++)
	{
		if (b[i] / 13 == 0)
			printf("%c ", n[b[i] % 13]);
	}

	printf("\n\003 ");
	for (i = 0; i < 13; i++)
	{
		if (b[i] / 13 == 1)
			printf("%c ", n[b[i] % 13]);
	}

	printf("\n\004 ");
	for (i = 0; i < 13; i++)
	{
		if (b[i] / 13 == 2)
			printf("%c ", n[b[i] % 13]);
	}

	printf("\n\006 ");
	for (i = 0; i < 13; i++)
	{
		if (b[i] / 13 == 3)
			printf("%c ", n[b[i] % 13]);
	}

	printf("\n");
}

