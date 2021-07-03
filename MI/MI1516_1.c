#include <stdio.h>
#define GRAN 100

int main(void){
	char niz[GRAN+1];
	
	printf("Upisite niz: ");
	fgets(niz,GRAN+1,stdin);
	char niz2[GRAN+1];
	int a,b;
	printf("Upisite dva broja: ");
	scanf("%d %d",&a , &b);
	int i=0;
	
	while (niz[i]!='\0'){
		niz2[i]=(a *(niz[i]- 'A') + b) % 26+ 'A';
		i=i+1;		
	}
	niz2[i]='\0';
	printf("Kriptirani niz: %s\n", niz2);
	printf("Ulazni niz: %s", niz);
	
	return 0;
}