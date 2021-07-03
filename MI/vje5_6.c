#include <stdio.h>

int main(void) {

	int n = 11, sumiranih = 0, suma = 0;
	
	while (sumiranih < 1000) {
		if (n % 7 == 0 || n % 10 + n % 100 / 10 == 5) {
		sumiranih = sumiranih + 1;
		suma = suma + n;
		}
		n = n + 1;
	}
	
	printf("%d", suma);
	
	return 0;
}