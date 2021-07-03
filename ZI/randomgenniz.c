#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXNIZ_ULAZ 60
#define MAXNIZ_GEN 100

void izbaciNR(char *niz) {

	while (*niz != '\0') {
		if (*niz == '\n' && *(niz + 1) == '\0') {
			*niz = '\0';
		}
		++niz;
	}
	
	return;
}

void genText(char *ulaz, int duljinaGen, char *rezultat) {

	static _Bool inicijaliziran = 0;
	
	if (!inicijaliziran) {
		srand((unsigned int)time(NULL));
		inicijaliziran = 1;
	}
	int duljinaUlaz = 0;
	
	while (*(ulaz + duljinaUlaz) != '\0') {
			++duljinaUlaz;
	}
	for (int i = 0; i < duljinaGen; ++i) {
		*rezultat= *(ulaz + rand() % duljinaUlaz);
		++rezultat;
	}
	
	*rezultat = '\0';
	return;
}

int main(void) {

	char ulazni[MAXNIZ_ULAZ + 1];
	char generirani[MAXNIZ_GEN + 1];
	int duljinaGen;
	
	printf("Upisite niz > ");
	fgets(ulazni, MAXNIZ_ULAZ + 1, stdin);
	
	izbaciNR(ulazni);
	
	printf("Upisite duljinu generiranog niza > ");
	scanf("%d", &duljinaGen);
	
	for (int i = 0; i < 3; ++i) {
		genText(ulazni, duljinaGen, generirani);
		printf("%s\n", generirani);
	}
	
	return 0;
}