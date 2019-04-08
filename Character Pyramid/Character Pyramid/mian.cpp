#include <stdio.h>

int main() {
	int counter = 0;
	for (int i = 0; i < 10; i++) 
	{
		for (int j = 1; j < i + 2; j++) 
		{
			if (counter == 0) 
			{
				printf("a");
			}
			else if (counter == 1) 
			{
				printf("b");
			}
			else if (counter == 2) 
			{
				printf("c");
			}
		}
		printf("\n");
		if (counter == 2) counter = 0;
		else counter++;
	}
	getchar();
	return 0;
}