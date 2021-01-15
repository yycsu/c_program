#include <stdio.h>

int main()
{
	int i, j, k, count = 0;

	for (i = 0; i <= 3; i++)
	{
		for (j = 0; j <= 3; j++)
		{
			for (k = 0; k <= 6; k++)
			{
				if (i + j + k == 8)
				{
					count++;
					printf("the rad ball numbers: %d    the white ball numbers: %d    the black ball numbers: %d\n", i, j, k);
				}

			}
		}
	}

	printf("the different version numbers is: %d\n", count);

	return 0;
}