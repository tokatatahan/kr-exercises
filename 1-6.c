#include <stdio.h>

int main(void)
{
	int c;

	while ((c = getchar()) != EOF)
		printf("%d", getchar() != EOF);
	return 0;
}
