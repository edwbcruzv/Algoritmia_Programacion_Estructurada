
#include<stdio.h>

void LlenarMatriz(int a[][100],int m,int n);
void LlenarMatrizCeros(int a[][100],int m,int n);
void ImpMatriz(int a[][100],int r,int c);
void MultMatriz(int a[][100],int b[][100],int c[][100],int m,int n,int q);

int main(){
	int a[100][100], b[100][100], c[100][100];
	int m,n,q;
	printf("Digite las dimenciondes de la suma de matrices m,n,q respectivamente: ");
	scanf("%d%d%d",&m,&n,&q);
	printf("----------------------mat1-----------------------\n");
	LlenarMatriz(a,m,n);
	//ImpMatriz(a,m,n);
	printf("----------------------mat2-----------------------\n");
	LlenarMatriz(b,n,q);
	//ImpMatriz(b,n,q);
	//LlenarMatrizCeros(c,m,q);
	MultMatriz(a,b,c,m,n,q);
	ImpMatriz(c,m,q);
	
   /* printf("----------------------mat1-----------------------\n");
	ImpMatriz(matriz1,m,n);
	printf("----------------------mat2-----------------------\n");
	ImpMatriz(matriz2,n,q);*/
}


void LlenarMatriz(int a[][100],int m,int n){
	int j,i;
	for(j=0;j<m;j++){
		for(i=0;i<n;i++){
			printf("a[%d][%d]?",j+1,i+1);
			scanf("%d",&a[j][i]);
		}
	}
}

void LlenarMatrizCeros(int a[][100],int m,int n){
	int j,i;
	for(j=0;j<m;j++)
		for(i=0;i<n;i++)
			 a[j][i]=0;
}

void MultMatriz(int a[][100],int b[][100],int c[][100],int m,int n,int q){
	int i,j,k;
		 
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}



void ImpMatriz(int a[][100],int r,int c){
	int j,i;
	for(j=0;j<r;j++){
		for(i=0;i<c;i++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
