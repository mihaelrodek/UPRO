#include <stdio.h>

int main (void){
	
	int n=1,i=0, brz;
	
	do{
		if (n %3 ==0 || n%7==0){
			printf("%3d",n);
			if (i<=48) printf(", ");
			i++;
		}	
		
		if (i %10 ==0 && (i-brz)==1) printf("\n");
		brz=i;
		
		n=n+1;
	} while(i<=49);
	
	return 0;
	
}