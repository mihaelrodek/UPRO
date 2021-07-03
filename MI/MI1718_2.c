#include <stdio.h>
#define STUP 100
#define RED 100

int main(void){
	int m,n;
	int polje[RED][STUP];
	int i,j;
	
	printf("Upisite m i n : ");
	scanf("%d %d",&m,&n);
	
	for(i=0;i<m;i++){
		for (j=0;j<n;j++){
			scanf("%d", &polje[i][j]);
		}
	}
	
	int maks, pomocna, ponovljeni=0;
	
	for(i=0;i<m;i++){
	maks=0;
	ponovljeni =0;
		for (j=1;j<n;j++){
			if (polje[i][j]>polje[i][maks]){
				maks=j; 
				ponovljeni = 0;
			}
		if (polje[i][j]==polje[i][maks]){
				ponovljeni=1;
		}
		
		}

		if (ponovljeni != 1) {
			printf("(%d,%d):  %d",i,maks, polje[i][maks]);
		}
	
	}
	
	
	return 0;
}