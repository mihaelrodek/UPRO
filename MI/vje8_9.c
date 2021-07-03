#include <stdio.h>

int main(void){
	
	int n;
	int i;
	
	printf("Upisite cijeli broj [5,20]");
	scanf("%d", &n);
	
	int polje[2*n-1];
	
	for (i=0;i < (2*n-1);i=i+2){
		scanf("%d", &polje[i]);
	}
	
	for(i=1; i< (2*n-1); i= i+2){
		polje[i]=polje[i-1]+polje[i+1];
	}	
	
	for(i=0; i< (2*n-1);i++){
		printf("%d  ", polje[i]);
	}
	
	return 0;
}