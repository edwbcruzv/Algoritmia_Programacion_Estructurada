#include<stdio.h>
#include<string.h>

int BuscaNum(char a[]);
int EsDigito(char *c);

int main(){
	char array1[100],array2[100];
	puts("Digite la frese 1");
	gets(array1);
	puts("Digite la frase 2");
	gets(array2);
	puts(array1);
	puts("\n\n");
	puts(array2);
	puts("\n\n");
	printf("c1:%d\n\n",BuscaNum(array1));
	printf("c2;%d\n\n",BuscaNum(array2));
	printf("suma de c1 y c2:%d",BuscaNum(array1)+BuscaNum(array2));
}

int BuscaNum(char a[]){
	char num[20];
	
	int c,i=0,j=0;
	while(a[i]!='\0'){
		if((a[i]>='0')&&(a[i]<='9')){
			      	num[j++]=a[i];
		}
		i++;
	}
	num[j+1]='\0';
	c=atoi(num);
	return c;
}
/*
int EsDigito(char *c){
	return ((*c>='0')&&(*c<='9'));
}*/
