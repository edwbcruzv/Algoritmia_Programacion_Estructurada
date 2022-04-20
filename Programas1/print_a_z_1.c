#include<stdio.h>

void ImpAZ(char x);
void ImpZA(char a);
int main(){
	puts("digite un caracter");
	//ImpAZ(getchar());
	ImpZA(getchar());
	return 0;
	
}
void ImpZA(char a){
	if(a<='z'){
		ImpZA(a+1);
		putchar(a);
	}
}

void ImpAZ(char x){
	if(x=='z')
		printf("z");
	else{printf("%c",x);
		ImpAZ(x+1);
	}
}
/*
void ImpAZ(char x){
	char i;
	for(i=x;i<='z';i++)
		printf("%c ",i);
}*/
