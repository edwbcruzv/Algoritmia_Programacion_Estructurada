#include<stdio.h>

int main(){
	char a;
	printf("Digite un caracter: ");
	scanf("%c",&a);
	printf("\n\n");
	if(a>='a')
		if(a<='z')
			printf("Es minuscula\n");
	if(a>='A')
		if(a<='Z')
			printf("Es mayuscula\n");
		
	main();
}
