#include<stdio.h>

int main(int argc,char* argv[]){
	
	FILE* sal=fopen(*++argv,"w");
	char pal[50];
	char pal2[50];
	int i;
	for(i=1;i<=3;i++){
		//printf("Cadena %d:",i);
		scanf("%s %s",pal,pal2);
		fprintf(sal,"%s\t%s\n",pal,pal2);
	}
	fclose(sal);
	return 0;
}