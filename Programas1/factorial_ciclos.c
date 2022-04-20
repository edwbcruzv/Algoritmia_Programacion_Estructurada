#include<stdio.h>

int factw(int n);
int factdw(int n);
int factf(int n);

int main(){
	int n;
	scanf("%d",&n);
	printf("%d\n",factf(n));
	printf("%d\n",factw(n));
	printf("%d\n",factdw(n));
	return 0;
}

int factf(int n){
	int i,f=1;
	for(i=1;i<=n;i++)
		f=f*i;
	return f;
}

int factw(int n){
	int i=1,f=1;
	while(i<=n){
		f=f*i;
		i++;
	}
	return f;
}

int factdw(int n){
	int i=1,f=1;
	do{
		f=f*i;
		i++;
	}while(i<=n);
	return f;
}