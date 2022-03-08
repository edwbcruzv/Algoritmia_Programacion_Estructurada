#include<stdio.h>
void renglon(int);

int main(){
	
	int n,i;
	printf("Digite un numero: ");
	scanf("%i",&n);
	for(i=1;i<=n;i++){
		renglon(n);
		putchar('\n');
	
	}
	
	return 0;
}

void renglon(int n){
	int i;
	for(i=1;i<=n;i++)
		printf("%i",n);
	
}
