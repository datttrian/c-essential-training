#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d", &a);

	for (int i = 0; i < a; i++)
		putchar('-');
	putchar('\n');

	return (0);
}
