#include <stdio.h>

int get_square(int a[], int size)
{
	int i;

	for(i=0; i< size; i++)
		a[i] = a[i] *a[i];
}

int print_list(int a[], int size)
{
	int i;

	for(i=0; i<size; i++)
		printf("%3d", a[i]);
	printf("\n");

}



int main()
{
	int arr[] = {1,2,3,4,5};

	int size = 5;
	get_square(arr, size);
	print_list(arr, size);

	return 0;

}


