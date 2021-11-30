#include <stdio.h>
#define PI 3.14

int main()
{
	int x, y;
        double radius=5;
	double t;
	printf("Type the speed\n");
	printf("Panda:");
	scanf("%d", &x);
	printf("Hoarse:");
	scanf("%d", &y);
 
        t=(2*PI*radius)/(y-x);
	printf("t=%f\n", t);
	
	return 0;

}
        	
