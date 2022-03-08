#include<stdio.h>
int EsPrimo(int n);
void Primo(int n);
int main(){
	int n;
	printf("Digite un numero: ");
	scanf("%d",&n);
	Primo(n);
	return 0;
}
void Primo(int n){
	EsPrimo(n)?printf("%d Es Primo",n):printf("%d No Es Primo",n);
}
int EsPrimo(int n){
	int i=2;
	while(i<n){
	if((n%i)==0)
		return 0;
	i++;
	}
	return 1;
}
