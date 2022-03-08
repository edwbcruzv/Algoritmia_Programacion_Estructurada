#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int leearchivo(FILE*,char*[]);
void ordena(char*[],int);
void escribearchivo(FILE*,char*[],int);
int main()//(int argc, char const *argv[])
{
	//FILE *aa = fopen(*(argv+1),"r");
	FILE *aa = fopen("a.txt","r");
	char *pals[1000];
	int i;
	leearchivo(aa,pals);
	for(i=0;i<10;i++){
		printf("%s\n",pals[i]);
	}
	ordena(pals,10);
	printf("\n");
	for(i=0;i<10;i++){
		printf("%s\n",pals[i]);
	}
	FILE *bb = fopen("b.txt","w");
    escribearchivo(bb,pals,10);
	return 0;
}
void escribearchivo(FILE *bb,char *pals[],int n){
    int i;
    for(i=0;i<n;i++){
        fprintf(bb,"%s\n",pals[i]);
    }
    fclose(bb);
}
void ordena(char *pals[],int n){
    int i,j;
    char pal[80];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            if(strcasecmp(pals[i],pals[j])<0){
                strcpy(pal,pals[j]);
                strcpy(pals[j],pals[i]);
                strcpy(pals[i],pal);
            }
        }
    }
}
int leearchivo(FILE *aa,char *pals[]){
	int i=0;
	char pal[80];
	while(fscanf(aa,"%s",pal)==1){
		pals[i]=(char*)malloc(80);
		strcpy(pals[i],pal);
		i++;
	}
	return i;
}
