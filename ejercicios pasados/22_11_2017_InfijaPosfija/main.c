#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Elem.h"
#include "Lista.h"
#include "Pila.h"
int leearchivo(FILE*,char*[]);
void escribearchivo(FILE*,char*[],int);

int espari(Elem c){return c=='(';}
int espard(Elem c){return c==')';}

int esLetra(char a){
	return (((a>='a')&&(a<='z'))||((a>='A')&&(a<='Z')));
}
int esDigito(char a){
	return ((a>='0')&&(a<='9'));
}

int esOperando(char a){
	return (esDigito(a)||esLetra(a));
}
int prec(char a){
	switch(a){
		case '^':
			return 3;
			break;
		case '/':
		case '*':
			return 2;
			break;
		case '+':
		case '-':
			return 1;
			break;
		default:
			return 0;
			break;
	}
}
int main(int argc, char *argv[])
{
	Pila op = empty();
	char*c = *(argv+1);
	printf("Expresion: %s\n",c);
	int i = 0;

	while(c[i]){
		if (esOperando(c[i])){
			impelem(c[i]);
		} else if(espari(c[i])){
			op = push(c[i],op);
		} else if(espard(c[i])){
			while(!espari(top(op))){
				impelem(top(op));
				op = pop(op);
			}
			op = pop(op);
		} else if(isEmpty(op)){
			op = push(c[i],op);
		}else if(prec(c[i])>prec(top(op))){
			op = push(c[i],op);
		}else{
			//update
			while(!esVacia(op)&&prec(c[i])<=prec(top(op))){
			    impelem(top(op));
			    op = pop(op);
			}
			op=push(c[i],op);
		}
		i++;
	}
	while(!isEmpty(op)){impelem(top(op)); op=pop(op); }
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
