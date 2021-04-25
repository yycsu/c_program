#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	float score[10], max, min, ave, sum, s;
	int i, j, m, n, temp;
	sum = 0;
	for (i = 0; i < 10; i++)
	{
		score[i] = 1 + rand()/((double)(RAND_MAX)/100);
		printf("%f\n", score[i]);
		sum += score[i];
	}

	printf("\n");

	max = score[0];
	m = 0;
	for (j = 1; j < 10; j++)
	{
		if (max < score[i])
		{
			max = score[i];
			m = j;
		}
	}

	printf("max is %5.2f\n", max);

	min = score[0];
	n = 0;
	for (j = 1; j < 10; j++)
	{
		if (min > score[j])
		{
			min = score[j];
			n = j;
		}
	}

	printf("min is %5.2f\n", min);

	ave = (sum - max - min)/8;
	printf("average is %5.2f\n", ave);

	temp = 0;
	s = fabs(score[0] - ave);
	for (i = 0; i < 10; i++)
	{
		if (fabs(score[i] - ave) == 0)
		{
			temp = i;
			printf("the fairest person is: %d\n", temp+1);
		}
	}

	temp = 0;
	s = fabs(score[0] - ave);
	for (i = 0; i < 10;  i++)
	{
		if (fabs(score[i] - ave) != 0)
		{
			if (s > fabs(score[i] - ave))
			{
				s = fabs(score[i] - ave);
				temp = i;
			}
		}
	}

	printf("the fairest person is : %d\n", temp +1);

	if ((max - ave) > (ave - min))
		printf("the most unfair persion is : %d\n", m + 1);
	else if ((max - ave) == (ave - min))
		printf("the most unfair persion is : %d and %d\n", m + 1, n + 1);
	else
		printf("the most unfair persion is : %d\n", n + 1);

	printf("\n");
	return 0;
}	