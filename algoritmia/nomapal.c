#include<stdio.h>
char* unidades(int i);

int main(){
	int j;
	char*x;
	printf("Digite un numero: ");
	scanf("%i",&j);
	
	x=unidades(j);
	
	printf("%s",x);
}
void NumALet(int n){
	
	n=n%100000000;
	n=n%10000000;
	n=n%1000000;
	n=n%100000;
	n=n%10000;
	millar(n);
	n=n%1000;
	centenas(n);
	n=n%100;
	decenas(n);
	n=n%10;
	unidades(n);
}

char* unidades(int i){
	char*c=(char*)malloc(sizeof(10));
	switch(i){
		//case 1:return strcpy(c,"uno");break;
		case 1:return strcpy(c,"uno");break;
		case 2:return strcpy(c,"dos");break;
		case 3:return strcpy(c,"tres");break;
		case 4:return strcpy(c,"cuatro");break;
		case 5:return strcpy(c,"cinco");break;
		case 6:return strcpy(c,"seis");break;
		case 7:return strcpy(c,"siete");break;
		case 8:return strcpy(c,"ocho");break;
		case 9:return strcpy(c,"nueve");break;
	}
}

char* decenas(int i){
	char*c=(char*)malloc(sizeof(10));
	switch(i){
		//case 1:return strcpy(c,"uno");break;
		case 1:return strcpy(c,"dies");break;
		case 2:return strcpy(c,"veinte");break;
		case 3:return strcpy(c,"treinta");break;
		case 4:return strcpy(c,"cuarenta");break;
		case 5:return strcpy(c,"cincuenta");break;
		case 6:return strcpy(c,"sesenta");break;
		case 7:return strcpy(c,"setenta");break;
		case 8:return strcpy(c,"ochenta");break;
		case 9:return strcpy(c,"noventa");break;
	}
}

char* centenas(int i){
	char*c=(char*)malloc(sizeof(10));
	switch(i){
		//case 1:return strcpy(c,"uno");break;
		case 1:return strcpy(c,"cien");break;
		case 2:return strcpy(c,"docientos");break;
		case 3:return strcpy(c,"trescientos");break;
		case 4:return strcpy(c,"cuatrocientos");break;
		case 5:return strcpy(c,"quinientos");break;
		case 6:return strcpy(c,"seiscientos");break;
		case 7:return strcpy(c,"setecientos");break;
		case 8:return strcpy(c,"ochocientos");break;
		case 9:return strcpy(c,"novecientos");break;
	}
}

char* millar(int i){
	char*c=(char*)malloc(sizeof(10));
	char a; 
	
	if(i==1)
		return strcpy(c,"mil");
	else
	    a=unidades(i);
	
	switch(i){
		//case 1:return strcpy(c,"uno");break;
		case 1:return strcpy(c,"mil");break;
		case 2:return strcpy(c,"docientos");break;
		case 3:return strcpy(c,"trescientos");break;
		case 4:return strcpy(c,"cuatrocientos");break;
		case 5:return strcpy(c,"quinientos");break;
		case 6:return strcpy(c,"seiscientos");break;
		case 7:return strcpy(c,"setecientos");break;
		case 8:return strcpy(c,"ochocientos");break;
		case 9:return strcpy(c,"novecientos");break;
	}
}