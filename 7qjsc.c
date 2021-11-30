#include <stdio.h>

int binary_search(int list[], int n, int key)
{
	int low, high, middle;
	low =0;
	high = n-1;
	while(low <= high){
		printf("[%d %d]\n", low, high);
		middle = (low + high)/2;
		if(key == list[middle])
			return middle;
		else if(key > list[middle])
			low = middle +1;
		else
			high = middle -1;
	}
	return -1;
}

int main()
{
	int key;
	int size = 16;
	int grade[] = {2,6,11,13,18,20,22,27,29,30,34,38,41,41,45,47};
	printf("enter the number:");
	scanf("%d", &key);
	printf("result = %d\n", binary_search(grade, size, key));

	return 0;
}
