#include <stdio.h>

void draw_row()
{
	for (int i = 0; i < 10; i++)
	{
		putc(35, stdout);
	}
	putc('\n', stdout);
}

int main()
{
	draw_row();
	for (int i = 0; i < 10; i++)
	{
		draw_row();
	}


	getchar();
	return 0;
}

