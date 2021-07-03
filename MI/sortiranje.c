#include <stdio.h>


int main(void){
	int n;
	scanf("%d", &n);
	int polje[n];
	int i,j;
	
	for (i=0; i<n; i++){
		scanf("%d", &polje [i]);
	}
	int ind_min;

	
	for (i=0; i<n-1;i++){
		ind_min=i+1;
		for (j=i+2;j<n;j++){
			if (polje[j]<polje[ind_min]){
				ind_min=j;
			}
		}
		if (polje[ind_min] < polje[i]) {
			int pomocna = polje[i];
			polje[i] = polje[ind_min];
			polje[ind_min] = pomocna;
	}	
		
	}
	for (i = 0; i < n; i = i + 1) {
		printf("%d ", polje[i]);
	}
	
	return 0;
}