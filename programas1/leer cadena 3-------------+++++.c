#include<stdio.h>  

void leecad(FILE*arch);

int main(int argc,char*argv[]){
	FILE*sal=fopen(*++argv,"w");//no se que debe de hacer
	char cad[256];
	printf("teclea un un texto, termina con un #");
	leecad(sal);
	printf("%s\n",cad);
	fclose(sal);
	return 0;
	
}



void leecad(FILE*arch){
	char c;
	if((c=getchar())!='#'){
		fputc(c,arch);
		leecad(arch);
	}
	}
