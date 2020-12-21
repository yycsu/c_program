#include <stdio.h>

int main()
{
	int a, b, c;

	for (a = 0; a <= 1; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 1; c++)
			{
				if ((a && !b || !a && b) && (b&& !c || !b && c) && ((c && (a+b ==0)) || (!c &&(a + b >=1))))
				{
					printf("张三说的是%s\n",a ? "真话": "假话");
					printf("李四说的是%s\n",b ? "真话": "假话");
					printf("王五说的是%s\n",c ? "真话": "假话");
				} 
			}
		}
	}
	return 0;
}