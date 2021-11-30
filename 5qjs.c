#include <stdio.h>

int number=0;

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n==1)
	{
		printf("1 from %c to %c.\n", from, to);
		number++;
	}

	else
	{
		hanoi_tower(n-1, from , to, tmp);
		printf("%d from %c ro %c.\n", n, from, to);
		hanoi_tower(n-1, tmp, from, to);
		number++;
	}
}

int main()
{
	int n;
	printf("enter the number of hanoi\n");
	scanf("%d", &n);
	hanoi_tower(n,'A','B', 'C');
	printf("total number :%d\n", number);

	return 0;

}
