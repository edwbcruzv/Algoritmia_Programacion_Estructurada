#include<stdio.h>

int main(){
	char pal[200];
	FILE *aa=fopen("*++argv","r");
	char c;
	for((c=fgetc(aa))!=EOF)
	    putchar(c);
	return 0;
}
