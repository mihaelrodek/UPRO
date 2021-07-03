#include <stdio.h>
#define GRAN 10000

int main(void){
	unsigned int i;
	unsigned int z=0, br=0;
	
	for ( i=1; i <= GRAN ; i=i+1){
		z=i;
		br=0;
		do{
			z =z / 2;
			if (z % 2==0) br=br+1;
		}while (z > 0);
		
		if (br==4) printf("%4u  ",i);
		
		}
	return 0;
}