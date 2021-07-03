#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define GR 1000000
#define GG 60
#define DG 50

int main(void){
	
	int i,b;
	srand((unsigned int)time(NULL));
	int brojac[GG-DG+1]={0};
	
	for (i=0;i<GR;i++){
		b=rand()%(GG-DG+1)+DG;
		++brojac[b-DG];
	}
	
	for(i=DG;i<=GG;i++){
		printf("%3d %5d\n",i,brojac[i-DG]);
	}
	
}