#include<stdio.h>

long factorial(int n)
{
	

	if(n<=1) return 1;
	else return n *factorial(n-1);
	
}

int main()
{
	int n;

	printf("enter the whole number:");
	scanf("%d", &n);
        printf("%d! is %li. \n", n, factorial(n));
	return 0;
}	
