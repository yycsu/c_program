#include <stdio.h>

int main()
{
	char *m[7] = {" ", "美国","英国","法国","德国","意大利","俄罗斯"};
	int a[7][7], i, j, t, e, x, y;

	for (i = 1; i < 7; i++)
	{
		a[0][i] =1;//表示矩阵该列数据还未处理
	}

	for (i = 0; i < 7; i++)
	{
		for (j = 0; j < 7; j++)
		{
			a[i][j] = j;
		}
	}

	a[1][1] = a[2][1] = a[3][1] = a[5][1] = 0;
	a[1][3] = a[2][3] = a[3][3] = 0;
	a[1][4] = a[2][4] = a[3][4] = a[5][4] = a[6][4] = 0;
	a[3][5] = 0;
	a[1][6] = a[3][6] = a[5][6] = 0;
	
	while(a[0][1] + a[0][2] + a[0][3] +a[0][4] + a[0][5] + a[0][6] > 0)
	{
		for (i = 1; i< 7; i++)
		{
			if (a[0][i])
			{
				for (e = 0, j = 1; j < 7; j++)
				{
					if (a[j][i])
					{
						x = j;
						y = i;
						e++;
					}
				}

				if (e == 1)
				{
					for (t= 1; t < 7; t++)
					{
						if (t != i)
						{
							a[x][t] = 0;
							a[0][y] = 0;
						}
					}
				}
			}
		}
	}

	printf("矩阵的最终状态为:\n");

	for(i = 0;i < 7;i++)
	{
		for (j = 0; j < 7; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("推断结果为:\n");

	for(i = 1; i < 7; i++)
	{
		printf("%c来自",'A' - 1+ i);
		for (j= 1; j < 7; j++)
		{
			if (a[i][j]!=0)
			{
				printf("%s.\n",m[a[i][j]]);
				break;
			}

		}
	}

	return 0;
}