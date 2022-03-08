#include <stdio.h>
typedef int entero;
void impent(entero);
entero leeent();
typedef struct
{
	entero ent;
	entero num;
	entero den;
} fraccion;
void imfrac(fraccion);
fraccion leefraccion();

int main(){
    for(;;){
        printf("ingresa tu fraccion (entero,numerador,denominador)\n");
        fraccion x = leefraccion();
        imfrac(x);
        printf("\n");
    }
	return 0;
}

void impent(entero x){
	printf("%d",x);
}

void imfrac(fraccion x){
    if(x.ent!=0){
        impent(x.ent);
        printf("*");
    }
    printf("(");
	if(x.den==1){
        impent(x.num);
        printf(") ");
	} else if(x.den==0) {
        printf("error) ");
	} else if (x.num==0){
        printf("0) ");
	}else {
	    impent(x.num);
        printf("/");
        impent(x.den);
        printf(") ");
	}
}

entero leeent(){
	int x;
	scanf("%d",&x);
	return x;
}

fraccion leefraccion(){
	fraccion x;
	x.ent = leeent();
	x.num = leeent();
	x.den = leeent();
	return x;
}
