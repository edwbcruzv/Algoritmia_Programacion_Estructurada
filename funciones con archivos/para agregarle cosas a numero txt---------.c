#include<stdio.h>

int main(){
	FILE*aa=fopen("numeros.txt","a"); 
	int i,n;
	for(i=0;i<8;i++){
	fscanf(stdin,"%d",&n);  //"aa" a "stdin"
	fprintf(aa,"%d\n",n);  // "stdout" a "aa"
	}
	fclose(aa);   // agregar   
	return 0;
}
