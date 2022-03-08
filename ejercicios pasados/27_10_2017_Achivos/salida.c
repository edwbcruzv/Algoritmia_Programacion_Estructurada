#include "stdio.h"

int main()
{
	FILE *aa = fopen("fuente.txt","r");//nombre de archivo, modo lectura
	//fscanf(stdin,"%d",&a);//Igual que scanf pero con el archivo que recive, en este caso el teclado
	int i,n;
	for (int i=0; i<=9;i++)
	{
		fscanf(aa,"%d",&n);
		fprintf(stdout, "%d\n",n);
	}
	return 0;
}