#include <stdio.h>

int main()
{
	int cave[10];

	int i, index = 0, total = 1000;


	for (i = 0; i < 10; i++)
	{
		cave[i] = 1;
	}


	for (i = 0; i < total; i++)
	{
		index += i+1;
		cave[index % 10] = 0;
	}

	for (i = 0; i < 10; i++)
	{
		if (cave[i] == 1)
			printf("rabbit may be hidden in the cave %d\n", i);
	}

	return 0;
}