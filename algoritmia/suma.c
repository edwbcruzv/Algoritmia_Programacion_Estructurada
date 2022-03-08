#include<stdio.h>
int suma(int);
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",suma(n));
}

int suma(n){
	if(n==1)
	return 1;
	else return n+suma(n-1);
}
