//hacer un programa que solicite un caracter a travez del teclado, lo utilice como semilla para la generacionde numeros aleatorios e imprima los primeros 300 numeros aleatorios generas
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	puts("Digite un caracter");
	//time_t segs=time(NULL);
	srand(time(5));// srand da numeros pseudoaleatorios
	int g=300;
	while(g--)
		printf("%d  ",rand()%6+1);
	return 0;
}