#include<stdio.h>
float calc_raiz(float h);

int main(){
	float h;
	printf("Digite la raiz que guste calcular: ");
	scanf("%f",&h);
	calc_raiz(h);
	return 0;
}
float calc_raiz(float h){
	float p,e;
	h=sqrt(h);
	printf("¿Cual cree que sea la raiz?: ");
	scanf("%f",&p);
	e=h-p;
	printf("La Raiz es %f \nUsted dijo: %f \nLe Falto: %f\n",h,p,e);
}
