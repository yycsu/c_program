#include<stdio.h>

int main()
{
	int a = 1, b = 0, c = 0, d = 0, i;
	for (i = 1; i <= 4; i++)
	{
		if (b + d == 1 && b + c ==1 && a +b ==1)
		{
			break;
		}
		else
		{
			if (i == 1)
			{
				a = 0;
				b = 1;
			}
			else if(i ==2)
			{
				a = 0;
				c = 1;
			}
			else if(i ==3)
			{
				a = 0;
				d = 1;
			}
		}
	}

	if (i ==1)
		printf("甲是窃贼\n");
	else if (i ==2)
		printf("乙是窃贼\n");
	else if (i ==3)
		printf("丙是窃贼\n");
	else if(i ==4)
		printf("丁是窃贼\n");
	return 0;
}