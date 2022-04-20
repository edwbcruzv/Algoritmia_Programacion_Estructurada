#include<stdio.h>

void axt();
void triangulo1(int n);
void triangulo2(int n,int t);

int main(){
	int n=5,t=0;
	
	triangulo1(n);
	triangulo2(n,t);
	return 0;
}

void triangulo1(int n){
	int i;
	if(n!=0){
	for(i=0;i<n;i++){
		axt();
	}
	printf("\n");
	triangulo1(n-1);
	}
}

void triangulo2(int n,int t){
	int i;
	if(n!=t){
	for(i=0;i<=t;i++){
		axt();
	}
	printf("\n");
	triangulo2(n,t+1);
	}
}

void axt(){
	printf("*");
}