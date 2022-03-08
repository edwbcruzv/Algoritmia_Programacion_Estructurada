#include<stdio.h>

int main(){
	char pal[80];
	FILE *aa=fopen("palabras.txt","r");
	int i;
	
	for(i=0;i<8;i++){
	    fscanf(aa,"%s",pal);  
	    fprintf(stdout,"%s\n",pal);  
	}

	return 0;
}
