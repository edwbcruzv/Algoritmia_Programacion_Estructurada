#include <stdio.h>
void imptabla(int);
int main(){
	int n;
	printf("Dame el valor de la tabla que quieres\n");
	scanf("%d",&n);
	imptabla(n);
}
void imptabla(int n){
	int i = 1;
	while(i<=10){
		printf("%d x %d = %d\n",n,i++,n*i );
	}
}