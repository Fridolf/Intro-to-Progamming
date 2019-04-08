#include <stdio.h>



int main() 
{
	for (int i = 0; i < 10; i++) 
	{
		
		for (int j = 1; j < i + 1; j++) 
		{
			printf("0");
		}
		printf("\n");
	}
	
	getchar();
	return 0;
}