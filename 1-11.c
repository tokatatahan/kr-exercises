#include <stdio.h>

#define IN 1
#define OUT 0

int main(void)
{
	int c, nl, nw, nc, state;

	state = OUT;
	nl = nw = nc = 0;
	while ((c = getchar()) != EOF) {
		++nc;
		if (c == '\n') {
			++nl;
			state = OUT;
		} else if (c == ' ' || c == '\t')
			state = OUT;
		else if (state == OUT) {
			++nw;
			state = IN;
		}

	}
	printf("%d lines, %d words, %d bytes\n", nl, nw, nc);
	return 0;
}
