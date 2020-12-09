#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//定义所有可能的步骤
#define N 15

//定义每一步的各个对象状态和农夫过河的状态
int a[N][4];
int b[N];

char *name[] = 
{
	"		",
	"and wolf",
	"and goat",
	"and cabbage"
};

//开始递归,寻找方案
int search(int Step)
{
	int i;

	if (a[Step][0] + a[Step][1] + a[Step][2] + a[Step][3] == 4)
	{
		for (i = 0; i <= Step; i++)
		{
			printf("east:	");
			if (a[i][0] == 0)
				printf("wolf	");
			if (a[i][1] == 0)
				printf("goat	");
			if (a[i][2] == 0)
				printf("cabbage	");
			if (a[i][3] == 0)
				printf("farmer	");
			if (a[i][0] && a[i][1] && a[i][2] && a[i][3])
				printf("none");
			printf("			");

			printf("west:	");
			if (a[i][0] == 1)
				printf("wolf	");
			if (a[i][1] == 1)
				printf("goat	");
			if (a[i][2] == 1)
				printf("cabbage	");
			if (a[i][3] == 1)
				printf("farmer	");
			if (!(a[i][0] || a[i][1] || a[i][2] || a[i][3]))
				printf("none");
			printf("\n\n\n");

			if(i < Step)
			{
				printf("				the %d times\n", i+1);
			}

		
			if(i >= 0 && i < Step)
			{
				if (a[i][3] == 0)
				{
					printf("				---------->farmer ");
					printf("%s\n", name[b[i] + 1]);
				}
				else
				{
					printf("				<----------farmer ");
					printf("%s\n", name[b[i] + 1]);
				}				
			}
			
		}

		printf("\n\n\n");
		return 0;
	}

	for (i = 0; i < Step; i++)
	{
		if (memcmp(a[Step], a[i], 16) == 0)
		{
			return 0;
		}
	}

	if (a[Step][1] != a[Step][3] && (a[Step][1] == a[Step][0] || a[Step][1] == a[Step][2]))
		return 0;

	for (i = -1; i <= 2; i++)
	{
		b[Step] = i;
		memcpy(a[Step + 1] ,a[Step],16);
		a[Step + 1][3] = 1- a[Step + 1][3];

		if (i == -1)
		{
			search(Step +1);
		}

		else
			if(a[Step][i] == a[Step][3])
			{
				a[Step+1][i] = a[Step+1][3];
				search(Step +1);
			}
	}
	return 0;
}

int main()
{
	printf("\n\n				农夫过河,解决策略:\n\n\n:");
	search(0);
	printf("ko!");
}
