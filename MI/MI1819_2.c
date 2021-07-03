#include <stdio.h>

int main(void){
	int br[10]={0};
	int b, neg = 0,o, i;
	do{
		printf("upisati broj >");
		scanf("%d",&b);
		if (b<0){
			neg = neg +1;
			b=-b;
		}
		if (b != 0){
			do{
				o=b % 10;
				b=b/10;
				br[o]=br[0]+1;
			}while (b>0);
		}
	}while (b!=0);
	
	for (i=0; i<=9; i++){
			printf ("Znamenka %d : %5d puta\n", i, br[o]);	
	}
	
	return 0;
}