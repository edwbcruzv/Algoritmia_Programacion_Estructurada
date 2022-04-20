#include<stdio.h>
int myatoi(char* h);

int main(){
	char num[10];
	puts("Digite un numero");
	scanf("%s",&num);
	printf("%d",myatoi(num));
	return 0;
}

int myatoi(char* h){
	int i=0,n=0;
    while(h[i])
		n=(n*10)+h[i];
	return n;
}
