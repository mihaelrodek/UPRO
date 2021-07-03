#include <stdio.h>


int main(void){
	int m,n;
	scanf("%d %d", &m, &n);
	int polje[m][n];
	int i,j;
	
	for (i=0; i<m; i++){
		for (j=0;j<n;j++)
		scanf("%d", &polje [m][n]);
	}
	
	int ind_min, pomocna;
		
	for (i=0; i<m;i++){
		ind_min=0;
		for (j=i+1;j<n;j++){
			if (polje[i][j]<polje[i][ind_min]){
				ind_min=j;
			}
		}
		if (polje[i][ind_min] < polje[i][j]) {
			pomocna = polje[i][j];
			polje[i][j] = polje[i][ind_min];
			polje[i][ind_min] = pomocna;
		}	
		
	}
	for (i = 0; i < m; i = i + 1) {
		for (j=0;j <n; j++)
		printf("%d ", polje[i][j]);
	}
	
	return 0;
}