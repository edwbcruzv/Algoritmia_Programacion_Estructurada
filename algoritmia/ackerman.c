#include<stdio.h>
//  ACKERMAN
int ackerman(int,int);
int main(){
	int m,n;
	printf("Digite dos numeros para sacar el ackerman ");
	scanf("%d %d",&m,&n);
	printf("El ackerman es: %d",ackerman(m,n));
}

int ackerman(m,n){
	if(m==0)
	return n+1;
		else if((m>0)&&(n==0))
		     return ackerman(m-1,1);
		     	else if((m>0)&&(n>0))
		     	    return ackerman(m-1,ackerman(m,n-1));
}    


//FIBONACCI
/*
int main(){
	int m,n=1;
	printf("Digite un numero para sacar la serie de fibonacci ");
	scanf("%d",&m);
	printf("El fibonacci es: %d",ackerman(m,n));
}
int fibonacci(int m,int n){
	if(m==0)
	return m
	else return m+fibonacci(x)
}    */
