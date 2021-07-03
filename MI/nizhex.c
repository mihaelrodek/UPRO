#include <stdio.h>
#define MAKS 8

int main(void){
	
	char niz[MAKS];
	fgets(niz, MAKS, stdin);
	
	int i=0;
	while (niz[i] != '\0'){
		if (niz[i] == '\n') niz[i]='\0';
		i=i+1;
	}
	unsigned int s=0;
	
	while (niz[i] != '\0'){
		if (niz[i]>=0 && niz[i]<=9){
			niz[i]=niz[i]-48;
		}else if (niz[i]>='A' && niz[i]<='F'){
			niz[i]=niz[i]-55;
		} else {
			niz[i]='\0';
		}
		s= s+ niz[i];
		i=i-1;
	}
	printf("%u",s);
	
	
	return 0;
}