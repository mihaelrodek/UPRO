#include <stdio.h>

int main(void){
	
	int c;
	
	do{
		c=getchar();
		if(c!=EOF){
			printf("%4d",c);
		}		
		printf("\n");
	}while (c!=EOF);
	printf("Kraj");
	
	
	return 0;
}