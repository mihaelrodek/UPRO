#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(void){
	srand((unsigned int)time(NULL));
	
	FILE *tok=fopen("slova.bin","r");
	
	int ukznak = 'Z'-'A'+1+'z'-'a'+1+'9'-'0'+1;
	int br=0;
	char c;
	
	do{
		int sluc=rand()%ukznak;
		fseek(tok,sluc,SEEK_SET);
		fread(&c,sizeof(c),1,tok);
		printf("%c",c);
		br++;	
		
	}while(br<1000&& c!='X');
	
	
	return 0;
	
}