#include <stdio.h>

int main()
{
	int a, b, c, d, e, f;
	for (a = 0; a <= 1; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 1; c++)
			{
				for (d = 0; d <= 1; d++)
				{
					for (e = 0; e <= 1; e++)
					{
						for (f = 0; f <= 1; f++)
						{
							if (a + b >= 1 && a + d < 2 && a + e + f  == 2 && b == c && c + d == 1 && (d+e == 0 || d ==1))
							{
								printf("A%s被选去参加任务.\n", a?"":"未");
								printf("B%s被选去参加任务.\n", b?"":"未");
								printf("C%s被选去参加任务.\n", c?"":"未");
								printf("D%s被选去参加任务.\n", d?"":"未");
								printf("E%s被选去参加任务.\n", e?"":"未");
								printf("F%s被选去参加任务.\n", f?"":"未");
							}
						}
					}
				}
			}
		}
	}

	return 0;
}