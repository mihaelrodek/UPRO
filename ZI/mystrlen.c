#include <stdio.h>

int myStrlen(const char *niz) {

	int i = 0;
	
	while (*(niz + i) != '\0') {
		++i;
	}
	return i;
}

int main(void) {

	char niz[] = "Ovo je niz";
	char *konst = "Ovo je konstantni niz";
	
	printf("%d\n", myStrlen(niz));
	printf("%d\n", myStrlen(konst));
	
	return 0;
}