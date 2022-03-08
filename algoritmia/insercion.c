#include<stdio.h>
void LlenarArr(int*a,int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
}
}

void ImpArr(int*c,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
}

void insercion(int* a,int n){
    int i,j,v;
	for(i=1;i<n;i++){
		v=a[i];
		for(j=i-1;((j>=0)&&(a[j]>v));j--)
				a[j+1]=a[j];
		a[j+1]=v;
	}
	
	
	
}


int main(){
	int n, array[100];
	puts("No de Elementos? ");
	scanf("%d",&n);
	printf("\n\n");
	LlenarArr(array,n);
	insercion(array,n);
	ImpArr(array,n);
	
}


