#include <stdio.h>

float PIsuma(int n){
	int i,br=0;
	float s=0, pi;
	for (i=1; i<=n;i=i+2){
		if ((br % 2 )== 0 || br==0) {
			s= s + 1/(1.f * i);
			} 
		    else s= s -  1/(1.f*i);
		br=br+1;
	}
	pi = 4 * s;
    return pi;
}

float Volumen(int n, float d){
	float vol;
	float r= d/2;
	
	vol = (1.f * 4)/3 * r*r*r* PIsuma(n);
	
	return vol;
}

int main(void){
    int n;
	float d;
	printf("Upisite broj clanova niza:");
	scanf("%d", &n);
	printf("Upisite promjer kugle:");
	scanf("%f", &d);
	printf ("Volumen kugle je:%.4f", Volumen(n,d));
	
}