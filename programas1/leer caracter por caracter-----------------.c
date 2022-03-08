#include<stdio.h>

int main(){
	char pal[40];
	int e;
	printf("Escriba una palabra: \n\n");
	scanf("%s",pal);
	
	for(e=0;e<15;e++){
	
	printf("%i--%c\n",e,pal[e]);
}
	
	return 0;
}
