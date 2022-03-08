#include<stdio.h>

int main(){
	char x;
	printf("Digite una letra para decirle si es mayuscula o minuscula:");
	scanf("%c",&x);
	if((x>='a')&&(x<='z')){
		printf("Su caracter  %c  es Minuscula",x);
	}
	else if((x>='A')&&(x<='Z')){
	    printf("Su caracter  %c  es Mayuscula",x);
}	
	return 0;
}
