#include<stdio.h>

int main(int argc,char* argv[]){
	
	FILE* ent=fopen(*++argv,"r");
	char pal[50];
	int i;
	for(i=1;i<=5;i++){
		printf("Cadena %d:",i);
		fscanf(ent,"%s",pal);
		fprintf(stdout,"%s\n",pal);
	}
	fclose(ent);
	return 0;
}