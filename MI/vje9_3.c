#include <stdio.h>

int main (void){
	int m,n;
	
	printf("Upisite m,n");
	scanf("%d %d", & m, &n);
	int polje [m][n];
	int i,j;
	
	printf("Upisite (%d) x (%d) clanova polja\n",m, n);
	
	for (i=0; i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &polje[i][j]);
		}
	}
	int min_stup;
	
	for (j=0;j<n;j++){
	min_stup=polje[0][j];
		for(i=1;i<m;i++){
			if(polje[i][j]<min_stup){
				min_stup=polje [i][j];
			}
		}
		printf("%d. stupac: (%d,%d) ",min_stup, polje[i][min_stup]);
	}
	
	
	
	
	return 0;
}