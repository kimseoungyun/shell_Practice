#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int answer;
	int guess;
	int tries =0;
	answer = rand();

	do {
		printf("Guess the correct answer:");
		scanf("%d", &guess);
		tries++;
		if(guess > answer) 
			printf("The given integer is high.\n");
		if(guess < answer)
			printf("THe given integer is low.\n");

	}while (guess != answer);
	printf("Congratulations. Number of attempts = %d", tries);
	return 0;
}
