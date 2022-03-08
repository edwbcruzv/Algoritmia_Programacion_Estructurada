#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//leer n cadenas, meterlas en un arreglo y ordenarlas en funcion al tamaño de cada cadena e imprimirlas
char* leecad();
void LeePals(char*pals[],int n);
void ImpPals(char*pals[],int n);
void burbuja(char*a[],int n);
int NumCar(char pal[]);
//void intercam(char **A1,char **A2);
int main(){
	char *pals[100];      //se declara un arreglo que va a contener cadenas
	int i=0,n,j,s;
	printf("Cuantas cadenas va a ordenar: ");
	scanf("%d",&n);
	printf("Digite %d palabras\n",n);         
	LeePals(pals,n);
	burbuja(pals,n);
	printf("--------------------------------------------------------------------\n");
	ImpPals(pals,n);
	return 0;
}
//a "pals" la llenamos con las direcciones de memoria de las "n" cadenas que va a digitar el usuario	
void LeePals(char*pals[],int n){
	int i=0;
	while(n--){   
	pals[i++]=leecad();
	}
}
//"pals"se imprime lo contenido en las direcciones de memoria que contiene 
void ImpPals(char*pals[],int n){
	int e;
	for(e=0;e<n;e++)
		printf("%s\n",pals[e]);
}
//se le asignan las memorias 
char* leecad(){
	char pal[50],*c;                ///se declara una variable del tipo char  y otra que sea un apuntador
	scanf("%s",pal);                // escanea la palabra
	strcpy(c=(char*)malloc(80),pal); //lo contenido en "pal" se copia a una variable auxiliar "c" debido a que "pal" se ocupa de nuevo y su contenido se destruye y no se puede usar como valor de retorno
	return c;
}
//ordena los apuntadores del arreglo dependiendo de los caracteres contenidos en cada apuntador
void burbuja(char*a[],int n){
	int i,j;
	char *aux;
	for(j=0;j<n-1;j++){
		for(i=n-1;i>j;i--)
		   if(NumCar(a[i])<NumCar(a[i-1])){
			aux=a[i]; a[i]=a[i-1]; a[i-1]=aux;
			//  intercam(&a[i],&a[i-1]);
		   }
	}
}
/*
void intercam(char **A1,char **A2){
	char **aux;
	aux=A1;
	A1=A2;
	A2=aux;
	char pala[80];
	strcpy(pala,pal1);
	strcpy(pal1,pal2);
	strcpy(pal2,pala);
}*/
//cuanta cuantos caracteres que tiene una cadena
int NumCar(char pal[]){
	int c=0;
	while(pal[c]!='\0'){
		c++;
	}
	return c;
}
