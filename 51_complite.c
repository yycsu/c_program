#include <stdio.h>

int main()
{
	int low, high, i, j, m[1000], total, temp;

	printf("Please enter the range:");
	scanf("%d,%d", &low, &high);

	for (i = low; i <= high; i++)
	{
		temp = i;
		total = 0;

		for (j = 1; j < i;j++)
		{
			if (i % j == 0)
				total += j;
		}

		if (total == temp)
			printf("complite value: %d\n", temp);
	}

	return 0;
}