#include <stdio.h>


float x = 1;
float y = 20;

//Function 1: The function prints all integers between the first and second argument. The function return type must be void.

void between(int x, int y)
{
	for (int i = x; i <= y; i++)
	{
		printf("%d\n", i);
	}
}
int main()
{
	int x = 1;
	int y = 20;
	between(x , y);

	getchar();
	return 0;
}

// Function 2: The function takes in 2 floats as arguments and returns the sum of their squares.
