#include <stdio.h>
#define MAXNIZ 30

int main(void) {
	char niz[MAXNIZ + 1];
	int c, i = 0;
	int brojUcitanih = 0, brojNR = 0;
	
	while (brojUcitanih < 30 && (c = getchar()) != '#') {
		++brojUcitanih;
		if (c == '\n') {
			++brojNR;
			} else {
				niz[i++] = c;
			}
		}
	niz[i] = '\0';
	
	if (c == '#') {
		ungetc(c, stdin);
	}
	
	printf("Znakova novi red: %d\n", brojNR);
	printf("%s", niz);
	
	return 0;
}