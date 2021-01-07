#include <stdio.h>
#include <math.h>

int maxof3(int a, int b, int c)
{
	int t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}

	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	return (a * 100 + b * 10 + c);
}

int minof3(int a, int b, int c)
{
	int t;
	if (a < b)
	{
		t = a;
		a = b;
		b = t;
	}

	if (a < c)
	{
		t = a;
		a = c;
		c = t;
	}

	if (b < c)
	{
		t = b;
		b = c;
		c = t;
	}

	return (c * 100 + b * 10 + a);
}


int max_value(int v)
{
	int a, b, c;
	a = v/100;
	b = v%100/10;
	c = v%10;

	a = maxof3(a, b, c);
	return a;
}


int min_value(int v)
{
	int a, b, c;
	a = v/100;
	b = v%100/10;
	c = v%10;

	a = minof3(a, b, c);
	return a;
}






int main()
{
	int value;

	printf("Please enter a thrid value:");
	scanf("%d" ,&value);

	while(max_value(value) - min_value(value)!= value)
	{
		value = max_value(value) - min_value(value);
	}
	printf("the black hole value is:%d\n", value);
	
	return 0;
}
