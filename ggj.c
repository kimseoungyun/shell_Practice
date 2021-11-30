#include <stdio.h>

int main()
{
	int i = 2;
	int x;

	printf("even multiplication table\n");

	while(i<=9)
	{
		if(i%2==0)
		{
			for(x=1; x<=9; x++)
				printf("%d*%d = %d\n", i, x, i*x);
			printf("\n");
			i++;
		}
		else
		{
			i++;
		}
	}

	return 0;

}
