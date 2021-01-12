#include <stdio.h>
#include <math.h>

// int main()
// {
// 	int i = 1;
// 	double total = 0;

// 	while (i <= 64)
// 	{
// 		total += pow(2.0, (i - 1));
// 		i++;
// 	}

// 	printf("total number is: %f\n", total);
// 	return 0;
// }

int main()
{
	int i = 1;
	double temp = 1, total = 0;

	while (i <= 64)
	{
		total += temp;
		temp *= 2;
		i++;
	}

	printf("total number is: %f\n", total);
	return 0;
}