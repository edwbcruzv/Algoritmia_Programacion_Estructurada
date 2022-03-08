#include<stdio.h>

int main(int argc,char* argv[]){
	FILE* ent=fopen(*++argv,"r");
	//FILE* sal=fopen(*++argv,"w");
	char c;
	while((c=fgetc(ent))!=EOF){
		fputc(c,stdout);
	}
	printf("Se han copiado %d caracteres");
	fclose(ent);
	//fclose(sal);
	return 0;
}