#include <stdio.h>

int BOMB(int a[7][7], int x, int y)
{
	int i,k;

	for (i = x; i<x+3; i++)
	{
		a[y][i] = 1;
		a[y+1][i] =1;
		a[y+2][i] =1;
	}	
	printf("=====\n");
        for(i=1 ; i<6; i++)
        {
                for(k=1; k<6; k++)
                {
                        printf("%d", a[i][k]);
                }
                printf("\n");
	}
        printf("=====\n");

	return 0;

}


int main()
{
	int a,i,k,x,y;
	int arr[7][7] = {{0,0,0,0,0,0,0}, {0,0,0,0,0,0,0}, {0,0,0,0,0,0,0}, {0,0,0,0,0,0,0}, {0,0,0,0,0,0,0},{0,0,0,0,0,0,0},{0,0,0,0,0,0,0}};

	while(1)
	{
		printf("choose the option 1. enter 2. end\n");
		scanf("%d", &a);
		printf("=====\n");	
		for(i=1 ; i<6; i++)
        	{
		
                	for(k=1; k<6; k++)
                	{	
				printf("%d", arr[i][k]);
                	}
			printf("\n");

        	}
		printf("=====\n");

		if (a==1)
		{
			printf("5x5 enter the location of bomb {x,y} format : ");
			scanf("%d %d", &x, &y);
			
			BOMB(arr, x, y);
			       	
			
		}
		else if (a==2)
		{
			return 0;
		}
	}
	return 0;
}

