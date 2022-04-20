#include<stdio.h>

int main(){
	char o,a[50];
	int i=0;
	printf("Digite una palabra\n");
	gets(a);
	printf("Que letra desea eliminar: ");
	o=getchar();
	while(a[i]!=o){
		i++;
	}
	a[i]='x';
	puts(a);
}