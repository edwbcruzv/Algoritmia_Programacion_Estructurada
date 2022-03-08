#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct alumno{
	int ID;
	char nombre[30];
	float porcentaje;
}estatus;
void llena(estatus*);
void imprime(estatus*);
int main(){
	estatus* alumno1=(estatus*)malloc(sizeof(struct alumno));
	llena(alumno1);
	imprime(alumno1);
}

void llena(estatus*a){
	scanf("Digite su ID: %s\n",a->ID);
	scanf("Digite su Nombre: %s\n",a->nombre);//gets
	scanf("Digite su Porcentaje: %f\n\n\n",a->porcentaje);
}
void imprime(estatus* a){
	printf("Su ID: %n\n",a->ID);
	printf("Su Nombre: %s\n",a->nombre);
	printf("Su Porcentaje: %f\n",a->porcentaje);
}
