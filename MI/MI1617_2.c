#include <stdio.h>
#define GRAN 100

int main(void){
	printf("Upisite niz:");
	char niz[GRAN+1];
	scanf("%s",&niz);
	
	int duljina=0;
	int i=0,k=0,j;
	
	while (niz[i]!= '\0'){
		i= i+1;
	}

	duljina = i;
	char niz2[duljina];

	int br=0, mjesto=0;
	i=mjesto;
	while (niz[i] != '\0'){
		br=0;
		if (niz[i]>='A' && niz[i]<='Z'){
			niz2[k]=niz[i];
			k=k+1;
			for (j=i+1;j< duljina;j++){
				if (niz[j]>='a' && niz[j]<='z' && br!=1){
					niz2[k]=niz[j];
					mjesto=j;
					k=k+1;
					br=1;
				}
			}
		}else mjesto=mjesto+1;
		i=mjesto;
	}
	niz2[k]='\0';
	
	printf("Novi niz: %s",niz2);
	printf("Ulazni niz: %s", niz);
	
	return 0;
}