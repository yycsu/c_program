#include <stdio.h>

void main()
{
	int a, aa, b, bb, c, cc;

	for (a = 0; a <= 1; a++)
	{
		for (b = 0; b <= 1; b++)
		{
			for (c = 0; c <= 1; c++)
			{
				for (aa = 0; aa <=1; aa++)
				{
					for (bb = 0; bb <=1; bb++)
					{
						for (cc = 0; cc <=1; cc++)
						{
							if((a && !aa && b && !bb || !a && aa || !a&&!aa && !b)
								&& (!b)
								&& (c && !cc && !b && !bb || !c && cc || !c && !cc && b+bb == 1)
								&& (a + b+c ==1 && aa + bb +cc ==1 && a+aa != 2 && b +bb !=2 && c+cc !=2))
							{
								printf("The man stand on the left is %s.\n", aa?"doulbe-dealing":(a?"honest":"lying"));
								printf("The man stand on the middle is %s.\n", bb?"doulbe-dealing":(b?"honest":"lying"));
								printf("The man stand on the right is %s.\n", cc?"doulbe-dealing":(c?"honest":"lying"));

							}

						}
					}
				}
			}
		}
	}

}