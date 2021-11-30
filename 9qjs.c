#include <stdio.h>
#define ROWS 3
#define COLS 5

int main()
{
        int a[ROWS][COLS] = {{87,98,80,76,3},
                {99, 89, 90, 90, 0},
                {65, 68, 50, 49, 0}
                };
        int i;
	double a_scores=0, b_scores=0, c_scores=0, d_scores=0;
        for(i=0; i<ROWS; i++)
        {
                a_scores = a_scores + a[i][0];

                b_scores = b_scores + a[i][1];

		c_scores = c_scores + a[i][2];

		d_scores = d_scores + a[i][3];
		
	}
	printf("average of midterm : %.2f\n average of final : %.2f\n average of assignment : %.2f\n, average of quiz : %.2f\n", a_scores/3, b_scores/3, c_scores/3, d_scores/3);
        return 0;
}
