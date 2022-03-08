#include<stdio.h>

int main(int argc,char*argv[]){
	char pal[200];
	FILE *aa=fopen("*++argv","r");
	FILE*ad=fopen("*++argv","w");
	char c;
	while((c=fgetc(aa))!=EOF)
	    fputc(c,ad);
	    fputc(EOF,ad);
	return 0;
}
