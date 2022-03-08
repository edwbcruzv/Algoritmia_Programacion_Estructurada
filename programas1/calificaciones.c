#include<stdio.h>

int main(){
	int x;
	
	printf("Escriba la calificacion del 0 al 10: ");
	scanf("%i",&x);
	
	switch(x){
		case 10:printf("Felicidades Exelente");break;
		case 9:printf("Exelente");break;
		case 8:printf("Muy bien");break;
		case 7:printf("Bien");break;
		case 6:printf("Pansaste");break;
		case 5:printf("Reprobado");break;
		case 4:printf("Super-reprobado");break;
		case 3:printf("Que bruto pongale cero");break;
		case 2:printf("Que burro");break;
		case 1:printf("Yo no se que haces aqui");break;
		case 0:printf("Mejor vete a vender bon ice ");break;
		default:printf("Este numero no puede ser una calificacion");
	}

	
	
	return 0;
}
