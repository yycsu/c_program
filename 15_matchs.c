#include <stdio.h>

int computer, people, parse = 21;

int main()
{
	printf("****************************************\n");
	printf("*****you can never win, you can try*****\n");
	printf("****************************************\n");

	while(1)
	{
		printf("目前剩余火柴数目%d\n", parse);
		printf("People: ");
		scanf("%d", &people);
		if (people < 1 || people > 4 || people > parse)
		{
			printf("你违规了,你输入的火柴数有问题!\n");
			continue;
		}


		parse = parse -people;

		if (parse ==0)
		{
			printf("Computer win! Game Over!\n");
			break;
		}

		computer = 5 - people;
		parse = parse - computer;
		printf("Computer: %d\n", computer);

		if (parse == 0)
		{
			printf("People win! Game Over!\n");
			break;
		}
	}
	
	return 0;	
}