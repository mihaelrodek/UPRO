#include <stdio.h>
#define MAX 80

int main(void){
	int i=0;
	char c;
	char niz1[MAX],niz2[MAX];
	
	while ((c=getchar())!='X'){
		niz1[i++]=c;
	}
	niz1[i]='\0';
	
	i=0;
	while ((c=getchar())!='Y'){
		niz2[i++]=c;
	}
	niz2[i]='\0';

	i=0;
	while (niz1[i] != '\0')
		putchar(niz1[i++]);
	
	printf("\n");
	
	i = 0;
	while (niz2[i] != '\0')
		putchar(niz2[i++]);
	
	return 0;
}