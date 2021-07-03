#include <stdio.h>

int main (void){

	int broj, rezultat;
	scanf("%d", &broj);
	
	
	switch (broj) {
		case 5:
			rezultat = broj * 10;
 			break;
		case 7:
 			rezultat = broj * 10;
 			break;
		case 11:
		case 13:
 			rezultat = -broj;
			broj = 1;
 			break;
		default:
 			rezultat = 100;
 			break;
		}
		printf("%d",rezultat);
		return 0;
}