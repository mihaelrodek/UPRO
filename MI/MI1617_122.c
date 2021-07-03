#include <stdio.h>
#define DO_GRAN 10000

int main(void){
	unsigned int i;
	unsigned int z=1, br=0;
	
	for ( i=1; i <= DO_GRAN; i=i+1){
		z=i;
		do{
			z =z / 2;
			i =z % 2;
			if (i==1) br=br+1;
		}while (z != 0);
		
		if (br==4) printf("%u",i);
	}
	
	return 0;
}