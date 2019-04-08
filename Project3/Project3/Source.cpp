#include <stdio.h>
//Function 4: The function takes the temperature in Fahrenheit as a float and returns the Celsius value.

float temp(float x)
{
	printf("Enter Temperature in Fahrenheit =");
	float celsius = (x - 32) * 5 / 9;
	return celsius;
}
int main()
{
	printf("%f\n", temp(32));

	getchar();
	return 0;
}