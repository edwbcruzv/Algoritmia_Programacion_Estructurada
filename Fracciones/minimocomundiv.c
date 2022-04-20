#include<stdio.h>
#include<string.h>
int MCD(int N,int D);
int MCM(int N,int D);
void Divisores(int arr[25],int num);

int main(){
	int u,v;
	scanf("%d %d",&u,&v);
	printf("MCM: %d",MCD(u,v));
	return 0;
}


int MCD(int N,int D){
	if(N==0||D==0)
		return 0;
		if(D>N)
			return MCD(D,N);
		else if(N==D)
				return N;
			else if(N>D)
				return MCD(N-D,D);
}

int MCM(int N,int D){
	return (N*D)/MCD(N,D);
}
