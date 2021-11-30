#include <stdio.h>
#include <stdlib.h>

int main()
{
	int initial_money = 50;
	int goal = 200;
	int i;
	int wins = 0;

	for (i = 0; i<100; i++)
	{
		int cash = initial_money;
		while(cash>0 && cash < goal)
		{
			if (((double)rand() / RAND_MAX) < 0.5) cash++;
			else
				cash--;
		}
		if (cash == goal) wins++;
	}

	printf("initial amount $%d\n", initial_money);
	printf("target amount $%d\n", goal);
	printf("%d out of 100 successes\n", wins);
	return 0;
}
