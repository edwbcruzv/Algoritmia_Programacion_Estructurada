#include<stdio.h>
int suma(int a,int b);
int mult(int a,int b);
int main(){
	int a,b,c,d;
	puts("Digite cuatro numeros");
	scanf("%i %i %i %i",&a,&b,&c,&d);
	printf("\n%i",mult(suma(a,b),suma(c,d)));
	return 0;
}

int suma(int a,int b){
	return a+b;
}

int mult(int a,int b){
	return a*b;
}
