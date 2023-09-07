#include <stdio.h>
#include <stdlib.h>

/* generate multiple lines of output */
int main()
{
	int a, c, rows;

	/* get and verify input */
	printf("How many rows (18 max)? ");
	scanf("%d", &rows);
	/* avoid out-of-range values */
	if (rows > 18)
		rows = 18;

	/* Use variable c to count the number rows */
	c = 0;
	/* Process the rows */
	for (int i = 0; i < rows; i++)
	{
		/* Switch outout every other row */
		/* Row separator */
		if (i % 2)
		{
			for (int x = 0; x < 40; x++)
				putchar('=');
			putchar('\n');
		}
		else
		/* Row values */
		{
			for (char column = 'A'; column <= 'J'; column++)
				printf(" %d%c ", c, column);
			putchar('\n');
			c++;
		}
	}

	return 0;
}
