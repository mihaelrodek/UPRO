#include <stdio.h>
#include <ctype.h>

int main(void){
	
	FILE *ulaz = fopen("ulaz.txt","r");
	
	int c;
	
	while((c=fgetc(ulaz))!=EOF){
		putchar(toupper(c));
	}
	fclose(ulaz);
	
	
	return 0;
}