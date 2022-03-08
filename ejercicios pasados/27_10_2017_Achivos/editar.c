#include "stdio.h"

int main()
{
	int a;
	FILE *aa = fopen("fuente.txt","a");
	int i,n;
	for (int i=0; i<=9;i++)
	{
		fscanf(stdin,"%d",&n);
		fprintf(aa, "%d\n",n);
	}
	fclose(aa);
	return 0;
}