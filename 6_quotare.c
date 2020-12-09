#include <stdio.h>
#include <stdlib.h>

int array(int n)
{
	int i, j, no, max;
	int *mtrix;

	if(n %2 == 0)
	{
		n++;
	}
	max = n*n;

	mtrix = (int*)malloc(sizeof(int) * max);

	mtrix[n/2] = 1;
	
	i = 0;
	j = n/2;

	for (no = 2; no<=max; no++)
	{
		i = i -1;
		j = j +1;

		if ((no-1)%n == 0)
		{
			i = i +2;
			j = j -1;
		}

		if (i < 0)
			i = n -1;

		if (j > n-1)
			j = 0;

		mtrix[i * n + j] = no;
	}

	printf("After calculate:\n");
	no = 0;
	for (i = 0; i < n; i++)
	{
		printf("\n");
		for (j = 0; j < n; j++)
		{
			printf("%3d", mtrix[no]);
			no++;
		}
	}
	printf("\n");
	free(mtrix);
	return 0;
}

int main()
{
	int n;
	printf("Enter a number:\n");
	scanf("%d", &n);
	array(n);
	return 0;
}
