#include <stdio.h>

int main(void) {
	float z;
	float s=0.f;
	int i;
	
	for (i=1; i<=1000; i++){
		z=  1 /(1.f * i);
		if (i %2 != 0){
			s= s+ z;
		} else{
			s=s-z;
		}
	}
	
	printf ("%f",s);
	
	return 0;
}