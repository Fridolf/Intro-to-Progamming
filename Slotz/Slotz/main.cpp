#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#pragma warning (disable:4996)


int main()
{
	int random_number = 0;
	int counter = 0;
	int number = rand() % 10;
	int guess = 0;

	srand(time(0));


	for (;;)
	{
		printf("Try to guess the number.\n");
		scanf("%d", &guess);
		
		if (guess <= random_number)
		{
			printf("Too Low, Try again.\n");
		}
		else if (guess >= random_number)
		{
			printf("Too High, Try again.\n");
		}
		else if (guess == random_number)
		{
			printf("Isn't That cute, but you're right!\n");
			
		}
		
	}

	getchar();
	return 0;
	
}
