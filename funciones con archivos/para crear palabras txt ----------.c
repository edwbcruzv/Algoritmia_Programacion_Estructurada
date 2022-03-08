#include<stdio.h>

int main(){
	char pal[80]; 
	FILE *aa=fopen("palabras.txt","w");
	int i,n;
	for(i=0;i<8;i++){
	fscanf(stdin,"%s",pal);  //"aa" a "stdin"
	fprintf(aa,"%s\n",pal);  // "stdout" a "aa"
	}
	fclose(aa);   // agregar   
	return 0;
}
