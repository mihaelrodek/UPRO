#include <stdio.h>

int main(void){
	
	FILE *tok=fopen("predmeti.txt","r");
	FILE *pre1=fopen("predmeti1.bin","wb");
	FILE *pre2=fopen("predmeti2.bin","wb");
	
	struct pred_s {
		int sifra;
		char naziv[40+1];
		int brs;
	} predmet;

	predmet.brs=0;
	
	while (fscanf(tok,"%d %[^<\n]",&predmet.sifra, &predmet.naziv)==2){
		fwrite(&predmet,sizeof(predmet),1,pre1);
		fseek(pre2, (long)(predmet.sifra - 1000 - 1) * sizeof(predmet), SEEK_SET);
		fwrite(&predmet, sizeof(predmet), 1, pre2);
	}

	
}