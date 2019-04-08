#include <stdio.h>

//Function 3: The function returns 1 if the integer argument passed is an even number, 0 otherwise.


int number(int x)
{
	if (x % 2 == 1)
	{
		return 0;
	}
	if (x % 2 == 0)
	{
		return 1;
	}
}
int main()
{
	printf("%d\n", number(50));

	getchar();
	return 0;
}