#include<stdio.h>

long factorial(int n);
int main(){
	int numero;
	printf("\nDigite un numero para sacar su facorial: ");
	scanf("%i",&numero);	
	printf("El factorial de  %i  es: %i",numero,factorial(numero));
	return 0;
}
long factorial(int n){
	if(n<=1){
	return 1;
	}
	else{
    return (n*factorial(n-1)); 
	}
}
