#include <stdio.h>
#define MAX_N 8

int main(void){
	
	FILE *otvori=fopen("slucajni.bin","r");
	
	int n, polje[MAX_N];
	
	while (fread(&n, sizeof(n), 1, otvori) == 1) {
	
		fread(polje, sizeof(int), n, otvori);
		printf("%d ", n);
		
		for (int i = 0; i < n; ++i)
			printf("%d ", polje[i]);
			printf("\n");
		}
		
	fclose (otvori);
	return 0;
}