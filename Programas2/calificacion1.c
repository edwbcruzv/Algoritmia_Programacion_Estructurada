#include<stdio.h>

int main(){
	float ex;
	printf("Digite la calificacion del examen: ");
	scanf("%f",&ex);
	if(ex<6){
	    puts("Esta reprobado");
	    }
	else{
	    puts("Pasaste");
	} 
	return 0;
}
