#include <stdio.h>
#include <math.h>

int main()
{
	int i, N, flag = 1;


	while (flag)
	{
		printf("Please enter a value N:");
		scanf("%d", &N);
		for (int i = 0; i < N; i++)
		{
			if (i %2 == 1 && i %3 == 2 && i % 5 == 4 && i % 6 == 5 && i % 7 == 0)
				printf("the value %d is einstein value\n", i);

		}

		printf("继续请输入1，否则输入0：\n");
		scanf("%d", &flag);
	}

	return 0;
}