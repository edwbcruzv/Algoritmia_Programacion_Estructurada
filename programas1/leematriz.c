

#include<stdio.h>

void leeintmat(int[][100],int,int);
void impintmat(int a[][100],int r,int c);

int main(){
	int ren,col,a[100][100];
	printf("Dame las dimensione de la matriz (r,c)?");
	scanf("%d %d",&ren,&col); 
	leeintmat(a,ren,col);
	printf("-----------------------\n");
	impintmat(a,ren,col);
	return 0;
}

void leeintmat(int a[][100],int r,int c){
	int j,i;
	for(j=0;j<r;j++)
	    for(i=0;i<c;i++){
		    printf("a[%d,%d]?",j+1,i+1);
		    scanf("%d",&a[j][i]);
	}
}

void impintmat(int a[][100], int r, int c){
	int j,i;
	for(j=0;j<r;j++){
	    for(i=0;i<c;i++)
		    printf("%d\t",a[j][i]);
		printf("\n");
	}
}
