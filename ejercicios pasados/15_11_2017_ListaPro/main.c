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
	impLista(x);

	/*Lista a;
	a = vacia();
	esVacia(a)?printf("SI\n"):printf("NO\n");
	a = cons('c',cons('b',cons('a',a)));
	esVacia(a)?printf("SI\n"):printf("NO\n");
	impElem(cabeza(a));
	impElem(cabeza(resto(a)));
	a = cons('e',cons('d',a));
	impElem(cabeza(a));
	printf("La lista tiene %d elementos\n",numElem(a));
	impLista(a);
	return 0;*/
}