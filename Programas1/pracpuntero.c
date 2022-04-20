#include<stdio.h>
#include<stdlib.h>

void f1();
void f2();
void f3();

int main(){
	f1();
	f2();
	f3();
	return 0;
}

void f1(){
	int i;
	char c[10]; 	/////char
	for(i=0;i<10;i++){
	fflush(stdin);
		scanf("%c ",&c[i]);
	}
	printf("\n\n");
	for(i=0;i<10;i++)
		printf("%d		%c		%d		%p		%x\n",i,c[i],&c[i],&c[i],&c[i]);
}

void f2(){
	int i;
	float c[10];    ////float
	for(i=0;i<10;i++){
	fflush(stdin);
		scanf("%f",&c[i]);
	}
	printf("\n\n");
	
	for(i=0;i<10;i++)
		printf("%d		%f		%d		%p		%x\n",i,c[i],&c[i],&c[i],&c[i]);
}

void f3(){
	int i, c[10];	/////int
	for(i=0;i<10;i++){
	fflush(stdin);
		scanf("%d",&c[i]);
}
	printf("\n\n");
	
	for(i=0;i<10;i++)
		printf("%d		%d		%d		%p		%x\n",i,c[i],&c[i],&c[i],&c[i]);
}
