#include<stdio.h>

void irtabla(int);

int main(){
	int n;
	printf("Indique el numero deseado\n");
	scanf("%d", &n);	
	irtabla(n);
	return 0;
}

void irtabla(int t){
	int i=1;
	while(i<=10){
		printf("%d*%d=%d\n", t, i++, t*i);
	}
}
