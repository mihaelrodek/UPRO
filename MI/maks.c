#include <stdio.h>

int maks(int a, int b, int c){
	int max;
	max = a;
	if (b>a && c < b) max = b;
	if (b>a && c > b) max = c;
	if (c>a && c < b) max = b;
	if (c>a && c > b) max = c;
	printf("%d",max);
	return max;
}

int main(void){
	int d,e,f;
	 scanf ("%d %d %d", &d, &e, &f);
	 maks(d,e,f);
	return 0;
}
