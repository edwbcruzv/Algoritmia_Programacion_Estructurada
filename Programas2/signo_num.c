#include<stdio.h>

int main(){
	int n;
	printf("Digite su numero: ");
	scanf("%i",&n);
    
   if(n==0){
    	puts("El numero es cero");
    }
    else
	if(n<0){
		puts("el numero es negativo");
		}
		else{
		puts("El numero es positivo");
}  
	return 0;

 
}
