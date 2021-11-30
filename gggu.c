#include <stdio.h>

int main()
{
	int x, y;
	for(y=2; y<=9; y++)
	{
		for(x=1; x<=9; x++)
			printf("%d*%d = %d\n", y, x, y*x);
		printf("\n");
	}

	return 0;
}
