#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define DG1 5
#define GG1 10
#define DG2 10
#define GG2 20

void gadjaj(int *polje,int m,int n,int br){
	int i,j;
	
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			*(polje+n*i+j)=0;
		}
	}
	for (i = 0; i < br; ++i) {
		int slucajniRedak = rand() % m;
		int slucajniStupac = rand() % n;
		++*(polje + n * slucajniRedak + slucajniStupac);
		}
}


int main(void){
	int br,m,n,i,j;
	printf("Upisite broj hitaca: ");
	scanf("%d",&br);
	
	srand ((unsigned)time(NULL));
	
	m=rand()%(GG1-DG1+1)+DG1;
	n=rand()%(GG2-DG2+1)+DG2;
	
	int polje[m][n];
	
	gadjaj(&polje[0][0],m,n,br);
	
	for ( i = 0; i < m; ++i) {
		for ( j = 0; j < n; ++j) {
			printf("%10d", polje[i][j]);
		}
		printf("\n");
	}

	return 0;
}
