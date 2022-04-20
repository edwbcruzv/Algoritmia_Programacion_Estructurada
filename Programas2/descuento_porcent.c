#include<stdio.h>
int main(){
	float k,l;
	printf("Digita el porcentaje del descuento: ");
	scanf("%f",&k);
	printf("Digita el precio: $%");
	scanf("%f",&l);
	printf("el precio final es de: $%f",k=(k/100)*l);
    return 0;
}
