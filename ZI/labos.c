#include <stdio.h>

int main(void){
	
	FILE *bodovi=fopen("bodovi.txt","r");
	char jmbag[10+1];
	char ime[20+1];
	char prezime[20+1];
	float brb;
	float suma=0.f;
	int brojac=0;
	
	while( (fscanf(bodovi,"%s %s %s %f",jmbag,ime,prezime, &brb))==4){
		suma+=brb;
		brojac++;
	}
	
	float prosjek = suma / brojac;
	fseek(bodovi, 0L, SEEK_SET);
	
	while (fscanf(bodovi, "%s %s %s %f",
		jmbag, ime, prezime, &brb) == 4) {
		if (brb > prosjek) {
			printf("%s %s %s %.1f\n", jmbag, ime, prezime, brb);
		}
	}	
	
	fclose(bodovi);
	
	return 0;
	
}