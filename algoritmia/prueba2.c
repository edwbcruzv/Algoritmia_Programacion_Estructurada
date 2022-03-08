#include<stdio.h>

int main(){
	int a,b;
	printf("Digite un entero:");
	scanf("%d",&a);
	//printf("%d\n",a);
	printf("\n\n");
	if(!(a%2))
		printf("%d es multiplo de 2\n\n",a);
	if(!(a%3))
		printf("%d es multiplo de 3\n\n",a);
	if(!(a%5))
		printf("%d es multiplo de 5\n\n\n",a);
	
	main();
}
