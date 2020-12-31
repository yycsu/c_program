#include <stdio.h>

int main()
{
	int n, k, x, y, cc, pc, g;
	char choice;
	printf("More Mountain Game\n");
	printf("Game Begin\n");
	pc = cc = 0;
	g = 1;

    for( ; ; )
    {
    	printf("No.%2d game\n", g++);
    	printf("-----------\n");
    	printf("Do you want to play again? Please enter y or n: ");

    	do
    	{
    		scanf("%c", &choice);
    		if ((choice != 'y') && (choice != 'n'))
    			printf("Repeat again!\n");
    	}
  	  	while((choice != 'y') && (choice != 'n'));

  	  	if(choice == 'n')
  	  		break;
  	  	
    	printf("How many mountain are there?");
    	scanf("%d", &n);
    	if (!n)
    		break;
    	printf("How many mountain are allow to each time?");
    	do
    	{
    		scanf("%d", &k);
    		if (k > n || k < 1)
    			printf("Repeat again!\n");
    	}

    	while (k > n || k < 1);

    	do
    	{
    		printf("How many mountains do you wish to move away?");
    		scanf("%d", &x);
    		if (x < 1|| x > k || x > n)
    		{
    			printf("IllIgle, again please!\n");
    			continue;
    		}

    		n -= x;
    		printf("There are %d mountains left now.\n", n);
    		if (!n)
    		{
    			printf("...............I win. You are failaure ...............\n\n");
    			cc++;
    		}

    		else
    		{
    			y = (n- 1)%(k +1);
    			if (!y)
    				y = 1;
    			n-= y;
    			printf("Computer move %d moutains away.\n", y);
    			if (n)
    			{
    				printf("There are %d mountains left now.\n", n);
    			}

    			else
    			{
    				printf("...............I am failaure. You win...............\n\n");
    				pc++;
    			}
    		}
    	}
    	while (n);
    }

    printf("Game in total have been played %d.\n", cc+pc);
    printf("You score is win %d, lose %d. \n", pc, cc);
    printf("My score is win %d, lose %d.\n", cc, pc);
    return 0;
}