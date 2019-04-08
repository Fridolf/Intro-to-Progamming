#include <stdio.h>
#include <iostream>


//Write the necessary nested loops that print all the binary numbers in a 3 bit integer.

void main() {


	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			for (int n = 0; n < 2; n++)
				printf("%d%d%d ", i, j, n);
	getchar();
	return;


	int num = 7;
	int bitvals[3];

	for (int i = 0; i < 3 ; i++) {
		bitvals[i] = 0;
		if (num >= 4) {
			num = num - 4;
			bitvals[i] = 1;
		}
		if (num >= 2) {
			num = num - 2;
			bitvals[i] = 1;
		}
		if (num >= 1) {
			num = num - 1;
			bitvals[i] = 1;
		}
			
	}
		
	system("pause");
}
