#include <stdio.h>
#include <string.h>

int main(void) {
	
	FILE *film=fopen("filmovi.txt","r");
	FILE *dram=fopen("drama.txt","w");
	FILE *sf=fopen("SF.txt","w");
	FILE *kom=fopen("komedija.txt","w");
	FILE *izlaz=NULL;
	char naslov[60+1],zanr [8+1];
	int godina;
	
	while (fscanf(film, " %[^|]|%[^|]|%d",naslov, zanr, &godina) == 3){
		if (strcmp(zanr,"drama")==0){
			izlaz=dram;
		}else if(strcmp(zanr,"komedija")==0){
			izlaz=kom;
		} else izlaz =sf;
		fprintf(izlaz,"%s %d\n",naslov,godina);
		}
		
		
		fclose(film);
		fclose(dram);
		fclose(sf);
		fclose(kom);
		fclose(izlaz);

	return 0;
	
}
	
	
