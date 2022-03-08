#include<stdio.h>
void Tabla(int a[][100],int);
void ImpTabla(int a[][100],int);

int main(){
	int a[100][100],n;
	printf("Numero de tabla: ");
	scanf("%d",&n);
	Tabla(a,n);
	ImpTabla(a,n);

	return 0;
}

void Tabla(int a[][100],int n){
	int j,i;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			a[j][i]=((j+1)*(i+1));
		}
	}
}

void ImpTabla(int a[][100],int n){
	int j,i;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}