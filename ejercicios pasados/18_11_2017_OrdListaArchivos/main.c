#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Elem.h"
#include "Lista.h"
int leearchivo(FILE*,char*[]);
void escribearchivo(FILE*,char*[],int);
int main(int argc, char const *argv[])
{
	Lista x = vacia();
	FILE *aa = fopen(*(argv+1),"r");
	char pal[80],*pal2, *pals[1000];
	int n = leearchivo(aa,pals);
	int i;
	for (i = 0; i < n; i++)
	{
		pal2 = (char*)malloc(80);
		strcpy(pal2,pals[i]);
		x = cons(pal2,x);
	}
	x = ordLista(x);
	for (int i = 0; i < n; i++)
	{
		strcpy(pals[i],cabeza(x));
		x = resto(x);
	}
	FILE *bb = fopen(*(argv+2),"w");
	escribearchivo(bb,pals,n);
	return 0;
}

void escribearchivo(FILE *bb,char *pals[],int n){
    int i;
    for(i=0;i<n;i++){
        fprintf(bb,"%s\n",pals[i]);
    }
    fclose(bb);
}

int leearchivo(FILE *aa,char *pals[]){
	int i=0;
	char pal[80];
	while(fscanf(aa,"%s",pal)==1){
		pals[i]=(char*)malloc(80);
		strcpy(pals[i],pal);
		i++;
	}
	return i;
}