#include <stdio.h>
void leint(int*,int);
void imint(int*,int);
int main(){
	int t;
    printf("Ingresa el numero de numeros a leer\n");
    scanf("%d",&t);
    int n[t];
    leint(n,t);
    imint(n,t);
}
void leint(int * n,int t){
	int i = 0;
    while(i < t){
    	printf("Dame el numero %d:\n",i+1);
    	scanf("%d",n+i);
    	i++;//t--;
    }
}
void imint(int * n,int t){
	int i = 0;
	while(t > i){
		printf("n[%d] = %d\n",i,n[i]);
		i++;//t--;
	}
}