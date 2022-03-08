#include <stdio.h>
void PrintMatriz(int[][100],int,int);
void ScanMatriz(int[][100],int,int);
void IniciMatCeros(int[][100],int,int);
void MultMat(int[][100],int[][100],int[][100],int,int,int);
int main()
{
    int m,n,q;
    printf("Ingresa los valores de m, n y q\n");
    scanf("%d%d%d",&m,&n,&q);
    int A[m][100],B[n][100],C[m][100];
    ScanMatriz(A,m,n);
    PrintMatriz(A,m,n);
    ScanMatriz(B,n,q);
    PrintMatriz(B,n,q);
    MultMat(C,A,B,m,n,q);
    PrintMatriz(C,m,q);
	return 0;
}

void MultMat(int C[][100],int A[][100],int B[][100],int m,int n,int q){
    printf("\nResultado de Multiplicacion Matrices A x B:\n");

    IniciMatCeros(C,m,q);
    int i,j,k;
    for(i=0;i<m;i++){
        for(j=0;j<q;j++){
            for(k=0;k<n;k++){
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\n\n");
}

void ScanMatriz(int a[][100],int r, int c){
    int i=0,j=0;
    printf("\nPorfavor llene la matriz:\n");
	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++){
			printf("M[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n\n");
}

void PrintMatriz(int a[][100],int r, int c){
	printf("\n");
	int i=0,j=0;
	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++){
			printf("[ %d ]\t",a[i][j]);
		}
		printf("\n\n");
	}
}

void IniciMatCeros(int a[][100],int r,int c){
    int i=0,j=0;
	for (i = 0; i < r; i++){
		for (j = 0; j < c; j++){
			a[i][j] = 0;
		}
	}
}