/*definir una funcion que permita leer una secuencia de caracteres
y guardarla en un arreglo. El usuario indicará que ha terminado de
teclear la secuencia de carácteres cuando haya tecleado el simbolo '#'*/
#include <stdio.h>
void valcad(char*);
int main(){
	char cad[1000];/*cad hace referencia ala dirección de memoria donde inicia el arreglo (apuntado = variables que contienen un dirección de memoria)*/
	valcad(cad);
	printf("%s\n",cad);
	return 0;
}
//prototipo o signatura de función
void valcad(char * cad){
	char caracter;
	
	if((caracter=getchar()) == '#'){
		cad[0] = '\0';
	} else {
		cad[0] = caracter;
		valcad(cad+1);
	}
}
