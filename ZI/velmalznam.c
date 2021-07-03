#include <stdio.h>

int main(void){
	
	FILE *tok=fopen("slova.bin","wb");
	
	char i;
	for(i='A';i<'Z';i++){
		fwrite(&i,sizeof(i),1,tok);
	}
	for(i='a';i<'z';i++){
		fwrite(&i,sizeof(i),1,tok);
	}
	for(i='0';i<'9';i++){
		fwrite(&i,sizeof(i),1,tok);
	}
	
	fclose(tok);
	return 0;
	
}