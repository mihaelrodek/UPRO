#include <stdio.h>
#define MAKS 10

int main(void){
	
	int i,j, min_ind, pomocna;
	int polje [MAKS];
	printf("Upisite 10 pozitivnih brojeva: ");
	
	for (i=0;i<MAKS;i++){
		scanf("%d", &polje[i]);
	}
	
	for (i=0;i<MAKS-1;i++){
		min_ind=i+1;
			for (j=i+2;j<MAKS; j++){
				if (polje[j] % 10  < polje[min_ind] % 10){
					min_ind=j;
				}
			}
			if (polje[min_ind] % 10<polje[i] % 10){
				pomocna = polje[i];
				polje[i] = polje[min_ind];
				polje[min_ind] = pomocna;
			}
			
	}
	for (i=0;i<MAKS;i++){
		printf("%d  ", polje[i]);
	}
	
	
	
	return 0;
}