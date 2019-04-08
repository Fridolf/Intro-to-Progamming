#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int grid_size = 3;
float credits = 100.0;
float bet_amount = 5.00;
int reels[grid_size][grid_size];

//@todo:: can this function ever return more than one match even if there are multiple matches present?
int horizontal_match() {

	int matches = 0;

	for (int row = 0; row < grid_size; row++) {

		int cell_matches = 0;

		for (int col = 0; col < grid_size; col++) {

			int first_cell = reels[row][0];

			if (first_cell == reels[row][col]) {
				//printf("got a cell match! row:%d col:%d val: %d\n", row, col, reels[row][col]);
				cell_matches++;

			} else {
				break;
			}
		}

		if (cell_matches == grid_size) {
			//printf("got a horizontal match!\n");
			matches++;
		}
	}

	return matches;
}

int vertical_match() {

	int matches = 0;

	for (int col = 0; col < grid_size; col++) {

		int cell_matches = 0;
		for (int row = 0; row < grid_size; row++) {

			int first_cell = reels[row][0];

			if (reels[0][col] == reels[row][col]) {

				cell_matches++;

			} else {
				break;
			}
		}

		if (cell_matches == grid_size) {
			//printf("got a vertical match!\n");
			matches++;
		}
	}

	return matches;
}

//match from the top left
int diagonal_match_top_left() {

	int d_line_count = 0;
	int top_left = reels[0][0];

	for (int diagonal = 0; diagonal < grid_size; diagonal++) {

		if (top_left == reels[diagonal][diagonal]) {
			d_line_count++;
		}
	}

	if (d_line_count == grid_size) return 1;
	else return 0;
}

//match from the bottom left
int diagonal_match_bottom_left() {
	//test data
	//int reels[3][3] = { {0,0,0},{0,0,0},{0,0,0} };

	int d_line_count = 0;
	int bottom_left = reels[grid_size - 1][0]; //minus one cause arrays start at ZERO we need 2 not 3 (for a 3x3 grid)

	//count down to zero (start at bottom)
	int col = 0;
	for (int row = grid_size - 1; row >= 0; row--) {

		//printf("Row: %d Col: %d Val: %d\n", row, col, reels[row][col]);
		if (bottom_left == reels[row][col]) //check one at a time each cell against the initial diagonal
		{
		//	printf("matched: %d with: %d\n", bottom_left, reels[row][col]);
			d_line_count++; //increment this number each time we find a match or later comparison
		}
		col++;

	}

	//printf("DLine Count: %d \n", d_line_count);

	//here we check to see if the for loops counted up enough matches to create a full diagonal match
	if (d_line_count == grid_size) {
		return 1; //if our diagonal line count is equal to the grid size (which is also the same number of adiagonal squares) we will return 1 match (and exit the function)
	}
	return 0; //any time the previous if statement isn't true we just skip it and return 0 matches by default 
}


void generate_reels() {
	printf("(|BASIC CASINO|)\n");
	
	for (int row = 0; row < grid_size; row++) {
		printf(" ");
		for (int col = 0; col < grid_size; col++) {

			{
				reels[row][col] = rand() % 10;
				printf("|%d|  ", reels[row][col]);
			}
		} printf("\n");
	}
	
	printf("(|~~~~~~~~~~~~|)\n");

}

void line_break(int count = 80){
	for (int i = 0; i < count; i++) {
		printf("=");
	}
	printf("\n");
}


int main() {

	printf("Welcome to the Basic Slot Machine Casino!\nWe have graciously gifted you with 100 credits for free!\n\nHave fun!\n\n");
	line_break();
	srand((int)time(NULL));

	//When you press enter, the bet amouunt is subtracted from the credits, and the reels are randomized
	printf("You currently have %.2fc credits to spend.\n", credits);
	printf("Current bet amount %.2f.\n", bet_amount);
	printf("Press enter to play!\n\n");
	line_break();
	
	getchar();

	for (;;) {

		if (credits < bet_amount) {
			printf("You're out of money, you need to go now.");
			break;
		}

		//initialize/reinitialize our match counts / multipliers
		float diagonal_match_bonus = (float)3.6;
		float horizontal_match_bonus = (float)1.2;
		float vertical_match_bonus = (float)1.2;

		//consider moving this code in the for loop into a function..

		

		credits -= bet_amount;
		generate_reels();

		int matches_diagonal_bottom = diagonal_match_bottom_left();
		int matches_diagonal_top = diagonal_match_top_left();
		int matches_vertical = vertical_match();
		int matches_horizontal = horizontal_match();

		//analysis phase
		float credits_tmp = 0;
		credits_tmp += bet_amount * (matches_diagonal_bottom * diagonal_match_bonus);
		credits_tmp += bet_amount * (matches_diagonal_top * diagonal_match_bonus);

		if (matches_vertical > 0 && matches_horizontal > 0) {
			credits_tmp += bet_amount * ((float)1.2 * (matches_horizontal + matches_vertical));
		} else {
			credits_tmp += bet_amount * (matches_vertical * vertical_match_bonus);
			credits_tmp += bet_amount * (matches_horizontal * horizontal_match_bonus);
		}

		//dtermination phase
		credits += credits_tmp;
		if (matches_diagonal_bottom > 0 || matches_diagonal_top > 0 || matches_horizontal > 0 || matches_vertical > 0) {

			printf("Congratulations you have won %.2fc!\n", credits_tmp, credits);

		}

		printf("Your balance is now: %.2fc\n", credits);

		printf("Spin again?\n");
		getchar();
	}
	printf("\n\nPress Enter to exit the casino.");
	getchar();
	return 0;
}