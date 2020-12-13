#include <stdio.h>
#include <stdlib.h>

int main()
{
	int computer, person, parse = 0;

	printf("**********************************************\n");
	printf("*****you can never win, try it!***************\n");
	printf("**********************************************\n");

	while(1)
	{
		printf("now the count is : %d\n", parse);
		printf("Person: ");
		scanf("%d", &person);


		if (person < 1 || person > 2 || person > 30 - parse)
		{
			printf("you broken the rules!\n");
			continue;
		}

		parse = parse + person;

		if (parse == 30)
		{
			printf("Person win! Game Over\n");
			break;
		}

		computer = 3 - person;
		parse = parse + computer;

		printf("Computer: %d\n", computer);

		if (parse == 30)
		{
			printf("Computer win! Game Over\n");
			break;
		}
	}
	return 0;
}