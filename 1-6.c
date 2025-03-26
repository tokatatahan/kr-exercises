/* Exercise 1-6. Verify that the expression getchar() != EOF is 0 or 1. */

#include <stdio.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		printf("%d", getchar() != EOF);
	return 0;
}
