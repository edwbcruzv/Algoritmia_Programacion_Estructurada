#include<stdio.h>
int espar(int n);
int rango(int n);
void ceroscubo(int cubo[][50],int n);
void magic(int cubo[][50],int n);
void ImpTabla(int a[][50],int n);

int main(){
	int cubo[50][50],n;
	while(espar(n)||!rango(n)){
	printf("Digite la dimencion del cubo que sea impar; ");
	scanf("%d",&n);
    }
	ceroscubo(cubo,n);
	magic(cubo,n);
	ImpTabla(cubo,n);
	
	return 0;
}

int rango(int n){return (n>=1)&&(n<=20);}
int espar(int n){return (n%2)==0;}


void ceroscubo(int cubo[][50],int n){
	int i,j;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			cubo[j][i]=0;
		}
	}
}



void magic(int cubo[][50],int n){
	int i,r,c;
	r=0;    c=(n-1)/2;
	for(i=1;i<=(n*n);i++){
	    if((r<0)&&(c>=n)){ 
		 r=r+2;   c=n-1; 
		}
		else if(r<0){
			 r=n-1;
			}
			else if(c>=n){
				 c=0;
				}
			    else if(cubo[r][c]!=0){
					 c=c-1; r=r+2;
					}
	cubo[r][c]=i;
    r--;c++;
	}
}

void ImpTabla(int a[][50],int n){
	int j,i;
	for(j=0;j<n;j++){
		for(i=0;i<n;i++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}