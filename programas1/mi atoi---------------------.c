#include<stdio.h>

int miatoi(char alfa[]);
int main(){
	char alfa[30];
	printf("Digite una cadena para convertirla a entero: ");
	scanf("%s",alfa);
	printf("%d\n", miatoi(alfa)*2);
	
	return 0;
}

int miatoi(char alfa[]){
	int n=0,i=0;
	while(alfa[i])
			n=n*10+alfa[i++]-'0';
	return n;
}
