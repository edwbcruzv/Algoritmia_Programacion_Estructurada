#include<stdio.h>

void tabla(int a[][100],int t);
void imprime(int a[][100],int r,int c);

int main() {
	int a[100][100],t;
	printf("NUMERO DE TABLA\n");
	scanf("%d",& t);
	
	tabla(a,t);
	imprime(a,t,t);
return 0;
}
void tabla(int a[][100],int t){
 	int i,j;
 	for(i=0;i<t;i++){
 	   for(j=0;j<t;j++)
 	   a[j][i]=(j+1)*(i+1);
 	}
}
void imprime(int a[][100],int r,int c){
 	int i,j;
 	for(j=0;j<r;j++){
 		for(i=0;i<c;i++)
 		  	printf("%d\t",a[j][i]);
 	printf("\n");
	}
}
