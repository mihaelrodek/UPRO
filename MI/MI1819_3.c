#include <stdio.h>

int main(void){
	
	int m,n,i,j,najsuma=0,sumar=0,indeksnaj;
	
	printf("Upisati m i n");
	scanf ("%d %d", &m ,&n);
	printf ("Upisati clanove \n");
	int polje[m][n];
	
	for (i=0;i<m;i++){
		for(j=0;j<n;j++){
			
			scanf("%d",&polje[m][n]);
		}
	}
	i=0;
	for(j=0;j<n;j++){
		najsuma=najsuma+polje [i][j];
	}
	for (i=1;i<m;i++){
		sumar=0;
		for (j=0;j<m;j++){
			sumar=sumar+polje[i][j];
		}
		if (sumar>=najsuma){
			najsuma=sumar;
			indeksnaj=i;
		}
	}
	printf("Najveci redak\n");
	for (j=0;j<n;j++){
		printf("%5d", polje[indeksnaj][j]);
	}
	
	return 0;
}