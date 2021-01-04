#include <stdio.h>
#include <time.h>

int main()
{
	int all = 5;
	int i, j, k, count = 0;

	clock_t start, finish, start2, finish2;
	double times, times2;

	start = clock();
	for (i = 1; i < all; i++)
		for (j =  1; j < all; j++)
			for (k = 1; k < all && j != i; k++)
			{
				if (k != j && k != i)
				{
					printf("%d%d%d ", i, j, k);
					count++;
					if (count % 8 == 0)
						printf("\n");
				}
			}
	printf("\n");
	finish = clock();

	start2 = clock();
	for (i = 1; i < all; i++)
	{
		for (j = 1; j < all; j++)
		{
			for (k = 1; k < all && j!= i; k++)
			{
				if (j != k && i != k)
				{
					printf("%d%d%d ", i, j, k);
					count++;
					if (count % 8 == 0)
						printf("\n");
				}
			}
		}
	}
	finish2 = clock();


	times = (double)(finish - start)/CLOCKS_PER_SEC;
	times2 = (double)(finish2 - start2)/CLOCKS_PER_SEC;

	printf("\nThe total number is: %d\n", count);

	printf("\nmethod1 total time is: %f seconds\n", times);
	printf("\nmethod2 total time is: %f seconds\n", times2);

	return 0;
}