#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	int d1, d2, c1, c2, i, j;
	c1 = c2 = 0;
	srand((unsigned)time(NULL));
	rand();

	for(i = 1; i <=100; i++)
	{
		d1 = d2 = 0;

		for (j = 1; j <= 6; j++)
		{
			d1 = d1 + rand()%6 +1;
			d2 = d2 + rand()%6 +1;
		}
		if (d1 > d2)
			c1++;
		else if (d1 < d2)
			c2++;
	}

	if (c1 > c2)
		printf("\n The first player win.\n");
	else
		if (c1 < c2)
			printf("\n The second win.\n");
		else
			printf("They tie.\n");
	return 0;
}