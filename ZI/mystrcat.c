#include <stdio.h>

char *mystrcat(char *niz1, const char *niz2){
	int i=0,j=0;
	
	while (*(niz1+i)!='\0'){
		i++;
	}
	
	while (*(niz2+j)!='\0'){
		*(niz1+i++)=*(niz2+j++);
	}

	*(niz1+i)='\0';
	
	return niz1;
}

int main(void){
	char niz1[30]="ASDF";
	char *niz2="ASDFGH";
	
	printf("%s",mystrcat(niz1,niz2));
	
}