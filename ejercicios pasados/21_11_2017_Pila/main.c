#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Elem.h"
#include "Lista.h"
#include "Pila.h"
int leearchivo(FILE*,char*[]);
void escribearchivo(FILE*,char*[],int);
int main(int argc, char *argv[])
{
	Pila op = empty();
	char*c = *(argv+1);
	printf("Expresion: %s\n",c);
	int i = 0;
	while(c[i]){
		//putchar(c[i]);
		if (c[i]>='a'&&c[i]<='z'){
			putchar(c[i]);
		} else if(c[i]=='('){
			op = push(c[i],op);
		} else if(c[i]==')'){
			while(top(op)!='('){
				putchar(c[i]);
				op = pop(op);
			}
		} else if(prec(c[i])>prec(top(op))){
			op = push(c[i],op);
		}
		i++;
	}
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