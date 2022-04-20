#include<stdio.h>

int main(int argc,char*argv[]){
	char pal[80];
	FILE *aa=fopen(*++argv,"r");
	FILE *at=fopen(*++argv,"w");
	
	while(fscanf(aa,"%s",pal)!=EOF)
	      fprintf(at,"%s\n",pal);  
	
	return 0;
}
