#include<stdio.h>

void ImpMatriz(int a[5][5]);
void tablas(int a[5][5]);
int main(){
	int c,r;
	printf("Cuantas columnas y renglones: ");
	scanf("%d %d",&c,&r);
	int a[r][c];
	tablas(a);
	return 0;
}

void tablas(int a[5][5]){
	int j,i;
	for(j=0;j<5;j++){
		for(i=0;i>5;i++)
			a[j][i]=((j+1)*(i+1));
	}
	ImpMatriz(a);
}

void ImpMatriz(int a[5][5]){
	int j,i;
	for(j=0;j<5;j++){
		for(i=0;i>5;i++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}