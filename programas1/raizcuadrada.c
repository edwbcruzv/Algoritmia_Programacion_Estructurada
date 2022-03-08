#include<stdio.h>

int main(){
	float a;
	
	printf("Digite un numero para sacarle raiz cuadrada: ");
	scanf("%f",&a);
	if(a>0)
		printf("La raiz cuadrada de %.2f = %.2f",a,sqrt(a));
    else
        printf("La raiz cuadrada de %.2f es imaginaria: %.2fi",a,sqrt(-a));
	return 0;
}
