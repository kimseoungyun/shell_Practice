#include <stdio.h>

int main()
{
	int list[] = {3,2,9,7,1,4,8,0,6,5};
	int i, j, temp, least;
	int size = 10;
	for(i=0; i< size-1; i++)
	{
		least = i;
		for(j=i+1; j< size; j++)
			if(list[j] < list[least])
				least = j;

		temp = list[i];
		list[i] = list[least];
		list[least] = temp;
	}
	for(i=0;i<size; i++)
		printf("%d ", list[i]);

	printf("\n");
	return 0;
}

