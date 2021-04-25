#include <stdio.h>
#include <math.h>

int fun(int i);

int main()
{
	int i, j, ok;

	printf("请输入一个大于3小于2000的偶数:\n");

	while (scanf("%d", &i)!= EOF)
	{
		do
		{
			if (i %2)
			{
				printf("输入的数字不是偶数 ");
			}
			if (i < 4 || i > 2000)
			{
				printf("输入数字错误 ");
			}

			if(i %2 || i < 4 || i > 2000)
			{
				printf("请重新输入:\n");
				scanf("%d", &i);
			}
		}
		while(i < 4 || i > 2000 || i %2);
	
		ok = 0;
		for (j = 2; j < i/2 + 1; j++)
		{
			if (fun(j) && fun(i -j))
			{
				printf("\n%d可以拆分成 两个素数: %d 和 %d\n", i, j, i-j);
				ok = 1;
			}
			if(j != 2)
				j++;

			if (ok)
				break;
		}
	}
	
	return 0;
}

int fun(int i)
{
	int j;

	if (i <= 1)
		return 0;
	if (i ==2)
		return 1;
	if (!(i %2))
		return 0;
	for (j = 3; j < (int)sqrt((double)i)+ 1; j+=2)
	{
		if(!(i % j))
			return 0;
	}

	return 1;
}