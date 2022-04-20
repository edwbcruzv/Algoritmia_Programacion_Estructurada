#include<stdio.h>

int main(){
	int a[10]; 
	int n=10;
	llenar(a,n);
	imparr(a,n);
}

void llenar(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		a[i]=i;
	}
}

void imparr(int a[],int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
