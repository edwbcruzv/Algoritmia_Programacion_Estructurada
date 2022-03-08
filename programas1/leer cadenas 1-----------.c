 /*definir una funcion que permita leer caracteres y guardarlos en un arreglo
el usuario indicara que a terminados teclear la secuencia de caracteres cuando
 haya tecleacdo el simbolo del numero # */
#include<stdio.h>

void leecad(char*pal);
int main(){
	char cad[256];
	printf("teclea un un texto, termina con un #");
	leecad(cad);
	printf("%s\n",cad);
	return 0;
}


void leecad(char*pal){
	char c;
	c=getchar();
	if(c=='#')
	pal[0]=' ';
	else{
		pal[0]=c;
		leecad(pal+1);
	}
}
