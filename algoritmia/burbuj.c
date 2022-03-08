#include<stdio.h> // una prueba de escritorio de un arreglo 4 3 2 1 0
#include"myarray.h"

int main(){
	int a[20],n;
	printf("Cuantos elementos va a insertar\n");
	scanf("%d",&n);
	LlenarArr(a,n);
	burbuja(a,n);
	ImpArr(a,n);
	return 0;
}

