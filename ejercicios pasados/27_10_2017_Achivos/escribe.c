#include "stdio.h"

int main()
{
	int a;
	FILE *aa = fopen("diccionario.txt","r");
	char pal[80];
	int i;
	for (int i=0; i<=9;i++)
	{
		fscanf(aa,"%s",pal);
		fprintf(stdout, "%s\n",pal);
	}
	return 0;
}