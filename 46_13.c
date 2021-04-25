#include <stdio.h>
#include <math.h>

int main()
{
	int a, b, temp;

	printf("Please enter two values you want to calculate:");
	scanf("%d, %d", &a, &b);
	temp = a;

	for (int i = 0; i < b-1; i++)
	{
		temp *= a;
		temp = temp % 1000;
	}

	printf("the last three digit is : %d\n", temp);
	return 0;
}