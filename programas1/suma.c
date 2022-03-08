#include<stdio.h>

typedef int entero;
void impent(entero);
entero suma(entero,entero);

int main(){
    entero a,b,c;
    printf("Dele un valor a los enteros A y B respectivamente: ");
    scanf("%d %d",&a,&b);
    impent(suma(a,b));
    return 0;
}
void impent(entero a){printf("%d\n",a);}
     
entero suma(entero a,entero b){return a+b;}  