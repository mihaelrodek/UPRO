#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){
	
	int n,i,c;
	char sl;
		
	do{
		printf("Upisite n > ");
		scanf("%d",&n);
		
	}while (n<3 && n>30);
	
	srand((unsigned int)time(NULL));
	for(i=0;i<n;i++){
		c=rand();
		sl=c % ('Z'-'A'+1)+'A';
		printf("%c",sl);
		
	}
	return 0;
	
}