#include <stdio.h>

int main()
{
	int birth;
	printf("Birth Month:");
	scanf("%d", &birth);
	switch(birth)
	{
		case 3:
		case 4:
		case 5:
			printf("You are born in spring!\n");
			break;
		
		case 6:
		case 7:
		case 8:
			printf("You are born in summer!\n");
			break;

		case 9:
		case 10:
		case 11:
			printf("You are born in fall!\n");
			break;
		
		default:
			printf("You are born in winter!\n");
			break;
	}
	return 0;
}

