#include<stdio.h>

void renglon(int);
void renglonm(int,int);
void espacios(int);
int main(){
	
	int n,i,m;
	scanf("%i",&m);
	n=m;
	for(i=1;i<=m;i++){
	espacios(n-1);
	renglonm(2*i-1,i);
	putchar('\n');
	}
	
	return 0;
}

void renglon(int n){
	int i;
	for(i=1;i<=n;i++)
		printf("%i",n);
	
}

void renglonm(int n,int m){
	int i;
	for(i=1;i<=n;i++)
		printf("%i",m);
	
}

