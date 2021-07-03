#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define BR 1000

int main(void){

	srand ((unsigned)time(NULL));
	int a,i;
	char c;
	int brs=0,brz=0,bro=0;
	
	for(i=0;i<BR;i++){
	a=rand();
	c=a%(126-32+1)+32;
	
	if (c>='A' && c>='z'){
		brs++;
	}else if(c>='0'&& c<='9'){
		brz++;
	}else bro++;
	
	}
	printf ("Slova je: %d\n Brojka je %d\nZnamenka je %d",brs,brz,bro);
	return 0;
}