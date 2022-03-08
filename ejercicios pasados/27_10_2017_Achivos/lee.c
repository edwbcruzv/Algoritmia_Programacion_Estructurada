#include "stdio.h"

int main()
{
	int a;
	FILE *aa = fopen("diccionario.txt","a");
	char pal[80];
	int i;
	for (int i=0; i<=9;i++)
	{
		fscanf(stdin,"%s",pal);
		fprintf(aa, "%s\n",pal);
	}
	fclose(aa);
	return 0;
}