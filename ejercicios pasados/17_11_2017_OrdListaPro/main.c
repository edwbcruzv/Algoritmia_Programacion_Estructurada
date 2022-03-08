#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Elem.h"
#include "Lista.h"
int main()
{
	Lista x = vacia();
	char pal[80],*pal2;
	int i;
	for (i = 0; i < 5; i++)
	{
		scanf("%s",pal);
		pal2 = (char*)malloc(80);
		strcpy(pal2,pal);
		x = cons(pal2,x);
	}
	printf("\n");
	impLista(x);
	printf("\n");
	impLista(ordLista(x));
	//Ordenar un  archivo dado desde la linea de comandos
}