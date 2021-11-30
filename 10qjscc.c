














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

