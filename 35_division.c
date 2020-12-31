#include <stdio.h>

int main()
{
	int i, j, m, n;
	int  remainder[101] = {0}, quotient[101] = {0};

	printf("Please enter two value (m/n)(0 < m < n < 100):");
	scanf("%d%d", &m, &n);
	printf("The accuracy of %d/%d is: 0.", m, n);

	for (i = 1; i <= 100; i++)
	{
		remainder[m] = i;
		m *= 10;
		quotient[i] = m /n;
		m = m % n;

		if (m ==0)
		{
			for (j = 1; j <= i; j++)
			{
				printf("%d", quotient[j]);
			}
			break;
		}

		if (remainder[m]!=0)
		{
			for (j = 1; j <= i; j++)
			{
				printf("%d", quotient[j]);
			}

			printf("\n\tand it's cycle from digit %d\n", remainder[m]);
			printf("\tto digit %d", i);
			break;
		}

	}
	printf("\n");

	return 0;
}