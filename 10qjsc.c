#include <stdio.h>

int BOMB(int a[5][5], int x, int y)
{
        int i,k;
        for (i = x; i<i+3; i++)
        {
                a[i][y] = 1;
                a[i][y+1] =1;
                a[i][y+2] =1;
        }
        printf("=====\n");
        for(i=0; i<5; i++)
        {

                for(k=0; k<5; k++)
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
        int a,b,c,i,k;
        int arr[5][5] = {{0,0,0,0,0}, {0,0,0,0,0}, {0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};

        while(1)
        {
                printf("choose the option 1. enter 2. end\n");
                scanf("%d", &a);
        	printf("=====\n");
        	for(i=0 ; i<5; i++)
        	{

                	for(k=0; k<5; k++)
                	{
                        	printf("%d", arr[i][k]);
                	}
                	printf("\n");
		}
        	printf("=====\n");

                if (a==1)
                {
                        printf("5x5 enter the location of bomb (x,y) : ");
                        scanf("%d %d", &b ,&c);
                        BOMB(arr, b, c);
                }
                else if (a==2)
                {
			return 0;
                }
        	
	}
        return 0;
}


