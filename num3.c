#include<stdio.h>

int main()
{
	unsigned int num;
	printf("decimal:");
	scanf("%u", &num);
	
	// Assume that you enter a number less than 256

	unsigned int mask = 1 << 7;  // mask = 10000000
	printf("binary number:");	

	((num & mask) == 0)? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0)? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0)? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0)? printf("0") : printf("1");
        mask = mask >> 1;
	((num & mask) == 0)? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0)? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0)? printf("0") : printf("1");
	mask = mask >> 1;
	((num & mask) == 0)? printf("0") : printf("1");
	printf("\n");
	
	int a,  sum;
	
	sum = 0;

	a = num/(2*2*2*2*2*2*2);
	num = num%(2*2*2*2*2*2*2);
	if (a==1)
	{
		sum += 1;
	}
	a = num/(2*2*2*2*2*2);
	num = num%(2*2*2*2*2*2);
	if (a==1)
	{
		sum += 1;
	}
	a = num/(2*2*2*2*2);
	num = num%(2*2*2*2*2);
	if (a==1)
	{
		sum += 1;
	}
	a = num/(2*2*2*2);
	num = num%(2*2*2*2);
	if (a==1)
	{
		sum += 1;
	}
	a= num/(2*2*2);
	num = num%(2*2*2);
	if (a==1)
	{
		sum += 1;
	}
	a = num/(2*2);
	num = num%(2*2);
	if (a==1)
	{
		sum += 1;
	}
	a = num/2;
	num = num%2;
	if (a==1)
	{
		sum += 1;
	}
	if (num==1)
	{
		sum += 1;
	}


	printf(" number of 1: %d\n", sum );

	return 0;

}	
