#include <stdio.h>

int main(void){
	
	int d, m, g, rez;
	rez = scanf("Datum:%d.%d.%d", &d, & m, & g);
	printf("%d.%d.%d",d,m,g);
	return 0;
}