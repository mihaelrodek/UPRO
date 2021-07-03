#include <stdio.h>
#include <ctype.h>

int brojsam(char *ime){
	FILE *ulaz=fopen(ime,"r");
	
	int sam=0;
	
	if (ulaz!=NULL){
		int c;
		while ((c=fgetc(ulaz))!=EOF){
			c = toupper(c);
			if(c=='A' || c=='E'|| c=='I'|| c=='U'|| c=='O')	sam++;
		}
		fclose(ulaz);
		} else sam=-1;
	
	return sam;
}

int main(void){
	
	char put;
	printf("Upisite kompletan put do datoteke >");
	scanf("%s",&put);
	int broj;
	broj = brojsam(&put);
	if (broj==-1){
		printf("Nije uspjelo otvaranje.");
	}else printf("Broj samoglasnika je %d",broj);
	
}