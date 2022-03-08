#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "UT.h"
#include "EQ.h"
int main()
{
	FILE *aa = fopen("TablaPeriodica.txt","r");
	Elemento *Elms[118];
	char NombreABuscar[50];
	int nElems = LeeTabla(aa,Elms), i;
	printf("Elemento a Buscar: ");
	scanf("%s",&NombreABuscar);
	BucarElemento(NombreABuscar,nElems,Elms);
	return 0;
}
