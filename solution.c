#include <stdio.h>
#include <math.h>

int main()
{
	double a, b, c, dis;

	printf("enter a coefficient:");
	scanf("%lf", &a);

	printf("enter b coefficient:");
	scanf("%lf", &b);
	
	if (a==0 && b==0)
		printf("It's not an equation.\n");

	else
	{
		printf("enter c coefficient:");
		scanf("%lf", &c);


		if(a==0)
			printf("The root of the equation is %f", -c/b);

		else
		{
			dis = (b*b -4.0*a*c);
			if(dis >= 0)
			{
				printf("The root of the equation is %f. \n", (-b+sqrt(dis))/(2.0*a));
				printf("The root of the equation is %f. \n", (-b-sqrt(dis))/(2.0*a));
			}
			else
				printf("There is no real root.\n");
		}
	}	
	return 0;
}

