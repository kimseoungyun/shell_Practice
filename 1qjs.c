#include <stdio.h>

int update(int n)
{		
	static int total = 100;
	total = total + n;
	return total;
}
int print_item()
{
}

int main()
{
	static int opt, n;

	while(1){
		printf("sale:1, buy:2, total:3,  end: 4\n");
		scanf("%d", &opt);

		if (opt<3 && opt > 0){
			printf("enter the number\n");
			scanf("%d", &n);
		}
		
		switch (opt){
			case 1:
				update(n);
				break;
			case 2:
				update(-n);
				break;
			case 3:
				print_item();
				break;
			case 4:
				goto out;
				
			default:
				printf("error : click misss\n");
		}
	}
out:
	return 0;
}

