#include <stdio.h>
//Function 5: The function prints the numbers between the first and the second argument that are divisible by the third argument. The return type must be void.

void between(int x, int y, int z)
{
	for (int i = x; i < y; i++)
	{
		if (i % z == 0);
		printf("%d\n", i);
	}

}
int main()
{
	int x = 3;
	int y = 5;
	int z = 15;
	between(x, y, z);

	getchar();
	return 0;
}