/*
 * Exercise 1-9. Write a program to copy its input to its output, replacing
 * each string of one or more blanks by a single blank.
 */

#include <stdio.h>

int main(void)
{
	int c, nb;

	nb = 0;
	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++nb;
		else {
			if (nb != 0) {
				nb = 0;
				putchar(' ');
			}
			putchar(c);
		}
	}
	return 0;
}
