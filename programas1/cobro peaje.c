#include<stdio.h>
#include<string.h>

void menuprivado(int carro);
void menucamiones(int camion);
void menucestatal(int camion);
void menucpublico(int camion);
int main(){
	char tp[10],tpp[10],publico[]="publico",estatal[]="estatal",federal[]="federal",privado[]="privado",carga[]="carga";
	int carro,camion;
	printf("\n\n\n            BIENVENIDO A LA CASETA DE COBRO --LOMAS--\n                     LISTA DE PEAJES 2017\n        Por favor seleccione el tipo de vehiculo que lleva: \n\n\n\n                privado       publico       carga\n\n");
	scanf("%s",&tp);
	
	if(strcmp(tp,privado)==0){
	puts("   Mediante el codigo seleccione el automovil que lleva para saber su peaje:\n------------------------------------AUTOS------------------------------------\n                           codigo\n                             000   Motocicletas\n                             1     Sedan\n                             2     Coupe\n                             3     Convertible\n                             4     Deportivo\n                             5     Electrico\n\n----------------------------------CAMIONETAS----------------------------------\n                           codigo\n                             101   Cuv\n                             102   Suv\n                             103   Van\n                             104   Minivan\n                             105   Pick up\n                             106   De redilas\n                             107   De 3 1/2 Toneladas\n                             108   De 4 1/2 Toneladas\n                             109   Con remolque");
	scanf("%i",&carro);
    menuprivado(carro);
    }
	
	if(strcmp(tp,publico)==0){
	puts("Mediante el codigo seleccione el automovil que lleva para saber su peaje:\n------------------------------------AUTOBUSES------------------------------------\n                           codigo\n                             201   Colectivo\n                             202   Foraneo\n                             203   Escolares\n                             204   Turismo\n");
    scanf("%i",&camion);
    menucpublico(camion);
	}
	
	if(strcmp(tp,carga)==0){
	puts("Seleccione el tipo de placa que tiene su vehiculo:\n     estatal    federal\n\n");
	scanf("%s",tpp);
	if(strcmp(tpp,federal)==0){
	puts("Mediante el codigo seleccione el automovil que lleva para saber su peaje:\n------------------------------------CAMIONES------------------------------------\n                           codigo\n                             302   2 Ejes\n                             303   3 Ejes\n                             304   4 Ejes\n                             305   5 Ejes\n                             306   6 Ejes\n                             307   7 Ejes\n                             308   8 Ejes\n                             309   Tanque cisterna de alimentos\n                             310   Tanque cisterna de sustancias peligrosas\n");
	scanf("%i",&camion);
	menucestatal(camion);
	}
	if(strcmp(tpp,estatal)==0){
	puts("Mediante el codigo seleccione el automovil que lleva para saber su peaje:\n------------------------------------CAMIONES------------------------------------\n                           codigo\n                             302   2 Ejes\n                             303   3 Ejes\n                             304   4 Ejes\n                             305   5 Ejes\n                             306   6 Ejes\n                             307   7 Ejes\n                             308   8 Ejes\n                             309   Tanque cisterna de alimentos\n                             310   Tanque cisterna de sustancias peligrosas\n");
	scanf("%i",&camion); 
	menucestatal(camion);
    }}
    
	return 0;
}
void menuprivado(int carro){
	switch(carro){
		case 000:printf("$25");break;
		case 1:printf("$40");break;
		case 2:printf("$48");break;
		case 3:printf("$78");break;
		case 4:printf("$83");break;
		case 5:printf("$42");break;
		case 101:printf("$46");break;
		case 102:printf("$52");break;
		case 103:printf("$57");break;
		case 104:printf("$60");break;
		case 105:printf("$73");break;
		case 106:printf("$80");break;
		case 107:printf("$100");break;
		case 108:printf("$120");break;
		case 109:printf("$165");break;
		default:printf("Este vehiculo esta prohibido o no esta registrado y por lo tanto no puede circular por esta via");
}}

void menucpublico(int camion){
	switch(camion){
		case 201:printf("$74");break;
		case 202:printf("$247");break;
		case 203:printf("$200");break;
		case 204:printf("$224");break;
		default:printf("Este vehiculo no esta registrado y por lo tanto no puede circular por esta via");
}}

void menucestatal(int camion){
	switch(camion){
		case 302:printf("$250");break;
		case 303:printf("$262");break;
		case 304:printf("$284");break;
		case 305:printf("$302");break;
		case 306:printf("$327");break;
		case 307:printf("$354");break;
		case 308:printf("$384");break;
		case 309:printf("$405");break;
		case 310:printf("Este vehiculo esta prohibido y por lo tanto no puede circular por esta via");break;
		default:printf("Este vehiculo no esta registrado y por lo tanto no puede circular por esta via");
	}
}

void menucfederal(int camion){
	switch(camion){
		case 302:printf("$265");break;
		case 303:printf("$269");break;
		case 304:printf("$295");break;
		case 305:printf("$315");break;
		case 306:printf("$336");break;
		case 307:printf("$369");break;
		case 308:printf("$400");break;
		case 309:printf("$414");break;
		case 310:printf("Este vehiculo esta prohibido y por lo tanto no puede circular por esta via");break;
		default:printf("Este vehiculo no esta registrado y por lo tanto no puede circular por esta via");
	}
}
