#include <stdio.h>
#include <math.h>


int main()
{
	int i, j = 1, n;

	int a[14] = {0};

	for (i = 1; i<= 13; i++)
	{
		n = 1;
		do
		{
			if (j > 13)
				j = 1;
			if (a[j])
				j++;
			else
			{
				if (n == i)
					a[j] = i;
				j++;
				n++;
			}
		}
		while (n <= i);
	}

	for (int k = 1; k <= 13;k++)
	{
		printf("%d ",a[k]);
	}

	printf("\n");
	
	return 0;
}