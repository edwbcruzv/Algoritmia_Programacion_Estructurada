#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char pal[80];
	char *pals[10];
	int i;
	for (i=0; i<5;i++)
	{
		printf("n=%d \n",fscanf(stdin,"%s",pal));
		pals[i]=(char*)malloc(80);
		strcpy(pals[i],pal);
	}
	for (i=0; i<5;i++)
	{
		printf("%s\n",pals[i]);
	}
	return 0;
}