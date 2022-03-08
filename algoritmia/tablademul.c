#include<stdio.h>
int tabla(int,int);
int main(){
	int m,n=0;
	printf("Que tabla de multiplicar quiere: ");
	scanf("%d %d",&m,&n);
	tabla(m,n);
}

int tabla(t,n){
	if(n){
	   tabla(t,n-1);
	   printf("%d x %d = %d\n",t,n,t*n);
    }      
}




