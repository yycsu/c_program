#include <stdio.h>
#include <math.h>

int prime(int n)
{
	int i,j;

	j = sqrt(n) + 1;

	for (i = 2; i < j; i++)
	{
		if (n%i == 0)
			return 0;
	}
	return 1;
}


int main()
{
	int i, start, end, count = 0; 
	printf("please enter start number:\n");
	scanf("%d", &start);
	printf("please enter end number:\n");
	scanf("%d",&end);


	for (i = start; i <= end; i++)
	{
		if (prime(i))
		{
			count++;
			printf("prime(%-4d): %-4d",count, i);
			if(count % 5 == 0)
				printf("\n");
		}
	}
	printf("\n");

	return 0;
}