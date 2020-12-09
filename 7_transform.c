#include <stdio.h>

int transform(int mtrix[3][3])
{
	int i, j, temp;

	printf("Before transform:\n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("%3d", mtrix[i][j]);
		}
	}
	printf("\n");


	for (i = 0; i < 3;i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j > i)
			{
				temp = mtrix[i][j];
				mtrix[i][j] = mtrix[j][i];
				mtrix[j][i] = temp;
			}
		}
	}

	printf("After transform:\n");
	for (i = 0; i < 3; i++)
	{
		printf("\n");
		for (j = 0; j < 3; j++)
		{
			printf("%3d", mtrix[i][j]);
		}
	}
	printf("\n");

	return 0;
}

int main()
{
	int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	transform(matrix);
	return 0;
}