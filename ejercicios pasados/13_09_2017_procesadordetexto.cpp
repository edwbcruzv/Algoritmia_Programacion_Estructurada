//  ./a.out nombrearchivo.tipoarchivo
#include <stdio.h>
/* char * argv[] - argv es un arreglo de apuntadores a carácter ó un arreglo de cadenas*/
void leecad(FILE*);
int main(int argc, char*argv[])
{
	FILE * sal = fopen(*++argv,"w");
	leecad(sal);
	fclose(sal);
	return 0;
}

void leecad(FILE*arch){
	char c;
	if((c=getchar()) != '$'){
		fputc(c,arch);
		leecad(arch);
	}
}