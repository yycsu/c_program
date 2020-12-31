#include <stdio.h>

int maxCommon(int a, int b)
{
	if (b == 0)
		return a;
	return maxCommon(b, a%b);
} 



int main()
{
	int a, b, c;
	printf("please enter two numbers:");
	scanf("%d, %d", &a, &b);

	c = maxCommon(a, b);
	printf("the max common division of %d and %d is : %d\n", a, b, c);
	return 0;

}