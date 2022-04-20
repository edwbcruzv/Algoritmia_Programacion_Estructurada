#include<stdio.h>
int suma(int,int);

int main(){
	int x,r=0;
	scanf("%d",&x);
	printf("el resultado es %d",suma(x,r));
	return 0; 
}

int suma(int x,int r){
	int n;
	if(x==0) return r;
	else scanf("%d",&n);
	suma(n,x+r);
	
}
