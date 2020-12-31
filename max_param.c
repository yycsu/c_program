#include <stdio.h>
#include <stdlib.h>

#define MAX_INT (~(unsigned)(-1)>>1)

int main()
{
	int i, j;
	int max = MAX_INT;
	int row = 0;
	int col = 0;
	int array[3][4] = {0,1,2,3,4,5,6,7,19,8,9,10};


	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (array[i][j] > max)
			{
				max = array[i][j];
				row = i;
				col = j;
			}
		}
	}

	printf("The max value in row :%d , col :%d, the value is:%d\n", row, col, max);
	return 0;

}