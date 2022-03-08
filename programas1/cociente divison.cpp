//leer dos numero enteros e imprima el cociente en formato de entero o formato real 
#include<stdio.h>

int main(){
	float i,j,div;
	int r;
	printf("Escriba el numero que va a dividir:\n");
	scanf("%f",&i);
	printf("Entre:\n");
	scanf("%f",&j);
	div=(i/j);
	r=div;
	printf("Formato real:%f  Formato entero:%i",div,r);
	return 0;
}
