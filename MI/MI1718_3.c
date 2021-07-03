#include <stdio.h>

int main (void) {
	int broj, prethodniBroj, suma;
 	printf("Upisati brojeve: ");
	scanf("%d", &broj);
 	suma = broj;
	
 	do {
 		prethodniBroj = broj;
 		scanf("%d", &broj);
		
 			if (broj > prethodniBroj) {
 			suma += broj;
 			}
 	} while (broj > prethodniBroj);
	
	
	printf("Suma: %d", suma);
 	return 0;
}
