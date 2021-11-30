#include <stdio.h>

int main()
{
	int n;
	int i = 1;

	printf("enter the table:");
	scanf("%d", &n);


	while(i <= 9)
	{
		printf("%d*%d = %d\n", n, i, n*i);
		i++;

	}

	return 0;
}
