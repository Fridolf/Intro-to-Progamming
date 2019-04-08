#include <stdio.h>
#pragma warning (disable: 4996)





int main() 
{

	int day;
	int month;

	printf("Enter the month and the day you were born.\n");
	scanf("%d %d", &month, &day);

	if ((month == 3 && day >= 21) || (month == 4 && day <= 21))
	{
		printf("You are an Aries!");
	}
	if ((month == 4) && (day >= 21) || (month == 5) && (day <= 22)) 
	{
		printf("You are a Taurus!");
	}
	if ((month == 5) && (day >= 22) || (month == 6) && (day <= 22)) 
	{
		printf("You are a Gemini!");
	}
	if ((month == 6) && (day >= 22) || (month == 7) && (day <= 24)) 
	{
		printf("You are a Cancer!");
	}
	if ((month == 7) && (day >= 24) || (month == 8) && (day <= 24)) 
	{
		printf("You are a Leo");
	}
	if ((month == 8) && (day >= 24) || (month == 9) && (day <= 24)) 
	{
		printf("You are a Virgo");
	}
	if ((month == 9) && (day >= 24) || (month == 10) && (day <= 24)) 
	{
		printf("You are a Libra");
	}
	if ((month == 10) && (day >= 24) || (month == 11) && (day <= 23)) 
	{
		printf("You are a Scorpio");
	}
	if ((month == 11) && (day >= 23) || (month == 12) && (day <= 23)) 
	{
		printf("You are a Sagittarius");
	}
	if ((month == 12) && (day >= 23) || (month == 1) && (day <= 21)) 
	{
		printf("You are a Capricorn");
	}
	if ((month == 1) && (day >= 21) || (month == 2) && (day <= 19)) 
	{
		printf("You are an Aquarius");
	}
	if ((month == 2) && (day >= 19) || (month == 3) && (day <= 21)) {
		printf("You are a Pisces");
	} 
	
	printf("done\n");
		
	getchar();
	getchar();
	return 0;
}

