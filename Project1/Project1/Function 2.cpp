#include <stdio.h>


// Function 2: The function takes in 2 floats as arguments and returns the sum of their squares.


void squaresum(float height, float width)
{
	float height_1 = 0; 
	float width_1 = 0;
	float sum = 0;

	height_1 = height * height;
	width_1 = width * width;
	sum = height_1 + width_1;

	printf("The sum of the 2 squares are %.2f\n", sum);
}
int main()
{
	squaresum(5, 5);

	getchar();
	return 0;
}