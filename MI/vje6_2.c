#include <stdio.h>

int main(void){
	int br;
	int s=0;
	scanf("%d",&br);
	
	while (br%7==0 || br%3==0){
		if (br%7==0 || br%3==0){
			s=s+br;	
			
		}
		scanf("%d",&br);
	}
	printf("%d",s);
	
	return 0;
}