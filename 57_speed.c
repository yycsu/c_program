#include <stdio.h>

int return_value(int v)
{
	int i, j,length = 0, m[100];

	int temp = v;

	while (temp > 0)
	{
		m[length] = temp % 10;
		temp /= 10;
		length++; 
	}


	for (i = 0, j = length; i < j; i++, j--)
	{
		
		if (m[i] != m[length -i - 1])
			return -1;
	}

	return 0;
}


int main()
{
	int i = 0, value = 95859, value2;
	double speed = 0;

	value2 = value + 1;
	while (return_value(value2) != 0)
		value2++;

	speed = (double)(value2 - value) / 2.0;

	printf("the speed is :%f\n", speed);

	return 0;
}