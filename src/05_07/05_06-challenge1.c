#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll(void);

int main()
{
	int dice1, dice2, dice3;

	/* seed the randomizer */
	srand((unsigned)time(NULL));

	dice1 = roll();
	dice2 = roll();
	dice3 = roll();
	printf("You rolled %d - %d - %d\n", dice1, dice2, dice3);

	return (0);
}

int roll(void)
{
	int r;

	r = rand() % 6;
	r += 1;

	return (r);
}
