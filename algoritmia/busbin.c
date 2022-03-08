#include<stdio.h>
#include<string.h>
typedef int Elem;


int main(){
	Elem e,array[]={1,3,5,9,10,14,18,22,33,40,45,72};
	int n;
	printf("Digite el No. de elementos del arreglo ");
	scanf("%d",&n);
	while(1){
	printf("Digite el elemento que desea buscar ");
	scanf("%d",&e);
	BusBin(n,e,array)?printf("Encontrado\n"):printf("No Encontrado\n");
	}
}

int BusBin(int n,Elem T,Elem A[12]){
	int M,L=0,R=n-1;
	
	while(L<=R){
		M=(L+R)/2;
		if(A[M]<T)
			L=M+1;
		else if(A[M]>T)
				R=M-1;
			else if(A[M]=T)
				return M;
	}
	return 0;
	
}
