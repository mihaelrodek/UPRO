#include <stdio.h>

 int func(char *s) {
 
	 int n = 0;
	 
 	while (*(s+n) != '\0') { 
	 ++n;
	 }
	 return n;
	 
}

int main(void){
	
	char s[20];
	fgets(s,20,stdin);
	
	printf("%d",func(s));
		
	return 0;
}