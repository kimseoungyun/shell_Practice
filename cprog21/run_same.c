#include<stdio.h>
#define PI 3.141592

int main(void)
{
 int x, y ;
 double z;
 int radius=5;




 printf("Type the speed \n"); 
 printf("Panda:"); 
 scanf("%d", &x);
 printf("Hoarse:");
 scanf("%d", &y);


 z =( PI*2*radius)/(x+ y); 

 printf("t= %lf\n", z);

return 0; 

}


