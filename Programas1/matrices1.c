#include<stdio.h>
int leeint();

void llenamat(int[][10],int,int);
void impmat(int[][10],int,int);
void suma(int [][10], int [][10], int [][10], int , int);
void resta(int [][10], int [][10], int [][10], int , int);
void mult(int [][10], int [][10], int [][10], int , int, int);
//void mult(int [][10],int [][10],int [][10],int ,int ,int );

void limpia(int [][10], int, int);
int main(){
	int opc,m,n,o;
	int a[10][10],b[10][10],c[10][10],r[10][10];
	printf("Operaciones con matices\n\n");
	printf("Elige una opcion\n");
	printf("1. Suma\n2. Resta\n");
	printf("3. Multiplicar\n");
	do{
		opc=leeint();
	}while((opc<1)||(opc>3));
	switch(opc){
	limpia(r,o,n);
		case 1:
			printf("Dame dos numeros para tus matrices\n");
			scanf("%d%d",&m,&n);
			printf("Suma de matrices de %dx%d\n",m,n);
			printf("Mat A\n");llenamat(a,m,n);
			printf("\nMat B\n");llenamat(b,m,n);
			printf("------------------------------------------\n");
			printf("Mat A\n");impmat(a,m,n);printf("\n");
			printf("Mat B\n");impmat(b,m,n);
			printf("Resultado:\n");suma(a,b,r,m,n);
			impmat(r,m,n);
			
		break;

		case 2:
			printf("Dame dos numeros\n");
			scanf("%d%d",&m,&n);
			printf("Resta de matrices de %dx%d\n",m,n);
			printf("Mat A\n");llenamat(a,m,n);
			printf("\nMat B\n");llenamat(b,m,n);
			printf("------------------------------------------\n");
			printf("Mat A\n");impmat(a,m,n);printf("\n");
			printf("Mat B\n");impmat(b,m,n);
			printf("Resultado:\n");resta(a,b,r,m,n);
			impmat(r,m,n);
		break;
		
		case 3:
			printf("Dame tres numeros\n");
			scanf("%d%d%d",&o,&m,&n);
			printf("Multiplicacion de matrices de %dx%d y %dx%d\n",n,m,m,o);
			printf("Mat A\n");llenamat(a,o,m);
			printf("\nMat B\n");llenamat(b,m,n);
			printf("------------------------------------------\n");
			printf("Mat A\n");impmat(a,o,m);printf("\n");
			printf("Mat B\n");impmat(b,m,n);
			printf("Resultado:\n");mult(a,b,r,o,m,n);
			impmat(r,o,n);
		break;
	}
	
	return 0;

}
int leeint(){
	int a;
	scanf("%d", &a);
	return a;
}
void llenamat(int x[][10], int y, int z){
	int i,j;
	for(i=0; i<y; i++){
		for(j=0; j<z; j++){
			printf("[%d][%d]= ",i,j);
			scanf("%d",&x[i][j]);
		}
	}	
}
void impmat(int x[][10], int y, int z){
	int i,j;
	for(i=0; i<y; i++){
		for(j=0; j<z; j++){
			printf("%d\t",x[i][j]);
		}
	printf("\n");
	}	
}
void suma(int a[][10], int b[][10], int r[][10], int y, int z){
	int i,j;
	for(i=0; i<y; i++){
		for(j=0; j<z; j++){
			r[i][j]=a[i][j]+b[i][j];
		}	
	}	
}
void resta(int a[][10], int b[][10], int r[][10], int y, int z){
	int i,j;
	for(i=0; i<y; i++){
		for(j=0; j<z; j++){
			r[i][j]=a[i][j]-b[i][j];
		}	
	}	
}
void mult(int a[][10], int b[][10], int r[][10], int o, int m, int n){
	int i,j,k;
	for(i=0; i<o; i++){
		for(j=0; j<n; j++){
			for (k=0;k<m;k++){
				r[i][j]=r[i][j]+((a[i][k])*(b[k][j]));
			}
		}	
	}	
}
/*void mult(int a[][10],int b[][10],int c[][10],int m,int n,int q){
	int i,j,k;
		 
	for(i=0;i<m;i++)
		for(j=0;j<q;j++)
			for(k=0;k<n;k++)
				c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}*/
void limpia(int r[][10], int y, int z){
	int i,j;
	for(i=0; i<y; i++){
		for(j=0; j<z; j++){
			r[i][j]=0;
		}	
	}
}


