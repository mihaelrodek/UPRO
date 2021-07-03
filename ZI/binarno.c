#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define GR 50

int main(void){
	
	FILE *upis=fopen("slucajni.bin","wb");
	srand((unsigned int)time(NULL));
	
	int i,j,n,polje[8];
	for(i=0;i<GR;i++){
		n=rand()%(8-2+1)+2;
		fwrite(&n, sizeof(n),1,upis);
		
		for(j=0;j<n;j++){
			polje[j]=rand()%(160-150+1)+150;
		}
		fwrite(polje,sizeof(int),1,upis);	
	}
	
	fclose(upis);
	return 0;
	
}