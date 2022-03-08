#include<stdio.h>  

void leecad(char*pal);

int main(char argc,char*argv[]){
	char cad[256];
	FILE*sal=fopen("cadena2.txt","w");///no se cuarda la cadena en el block de notas
	printf("teclea un un texto, termina con un #");
	leecad(cad);
	printf("%s\n",cad);
	fclose(sal);
	return 0;

}



void leecad(char*pal){
	char c;
	if((c=getchar())=='#')
	pal[0]=' ';
	else{pal[0]=c;
	leecad(pal+1);
	}
}
