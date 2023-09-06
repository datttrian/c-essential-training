#include <stdio.h>
#include <stdlib.h>

int main()
{
	int numRows, numCols;

	// Get and verify input for the number of rows
	printf("Enter the number of rows: ");
	if (scanf("%d", &numRows) != 1 || numRows <= 0)
	{
		printf("Invalid input for the number of rows. Please enter a positive integer.\n");
		return 1; // Exit with an error code
	}

	// Get and verify input for the number of columns
	printf("Enter the number of columns: ");
	if (scanf("%d", &numCols) != 1 || numCols <= 0)
	{
		printf("Invalid input for the number of columns. Please enter a positive integer.\n");
		return 1; // Exit with an error code
	}

	// Process the rows
	for (int i = 1; i <= numRows; i++)
	{
		// Avoid out-of-range values
		if (i > numCols)
		{
			printf("\n"); // Move to the next line if there are more rows than columns
		}
		else
		{
			// Generate output for each row
			for (int j = 1; j <= numCols; j++)
			{
				printf("* ");
			}
			printf("\n");
		}
	}

	return 0;
}
