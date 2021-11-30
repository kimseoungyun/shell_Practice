#include <stdio.h>

int gugu(int n)
{
	if(n >9) return(1);
	else 
		printf("3 * %d  = %d\n",n, 3*n);
		gugu(n+1);


}

int main()
{
	int n=1;
	gugu(n);

	return 0;
}
