#include <stdio.h>
#define MAKS 20

int main(void){
	
	int i=0, dm=0,dv=0;
	printf("Upisite niz");
	char ulazniNiz[MAKS];
	fgets(ulazniNiz, MAKS, stdin);
	char mSlova[MAKS];
	char vSlova[MAKS];
	while (ulazniNiz[i] != '\0'){
		if (ulazniNiz[i]>='a' && ulazniNiz[i]<='z'){
			mSlova [dm]=ulazniNiz[i];
			dm=dm+1;
		}
		if (ulazniNiz[i]>='A' && ulazniNiz[i]<='Z' ||ulazniNiz[i]>='0' && ulazniNiz[i]<='9'  ){
			vSlova [dv]=ulazniNiz[i];
			dv=dv+1;
		}
		i=i+1;
	}
	mSlova[dm]='\0';
	vSlova[dv]='\0';
	printf("%d; %s\n", dm, mSlova);
	printf("%d; %s", dv, vSlova);

	
	return 0;
}