#include <stdio.h>
#include <stdlib.h>
//Converts integers to Roman Numerals
static int roman_to_num(char r) 
{
	switch (r)
	{
	case 'I':
		return 1;
	case 'V':
		return 5;
	case 'X':
		return 10;
	case 'L':
		return 50;
	case 'C':
		return 100;
	case 'D':
		return 500;
	case 'M':
		return 1000;
	default:
		return 0;
	}
}

int roman_to_number(const char *s) 
{
	

	int i, int_num = roman_to_num(s[0]);

	for (i = 1; s[i] != '\0'; i++) 
	{
		int prev_num = roman_to_num(s[i - 1]);
		int cur_num = roman_to_num(s[i]);
		if (prev_num < cur_num) 
		{
			int_num = int_num - prev_num + (cur_num - prev_num);
		}
		else 
		{
			int_num += cur_num;
			
		}
			
		
	}return int_num;
}

int main()
{
	const char* str1 = "XIV";
	printf("Original Roman Number: %s", str1);
	printf("\n Roman to Number: %d", roman_to_number(str1));

	getchar();
	return 0;
}