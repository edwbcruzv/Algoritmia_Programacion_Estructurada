#include <stdio.h>
typedef int entero;
void impent(entero);
entero leeent();
typedef struct
{
	entero e;
	entero n;
	entero d;
} mitipo;
void immitipo(mitipo);
mitipo leemitipo();

int main(){
	mitipo x = leemitipo();
	immitipo(x);
	return 0;
}

void impent(entero x){
	printf("%d\n",x);
}

void immitipo(mitipo x){
	impent(x.e);
	impent(x.n);
	impent(x.d);
}

entero leeent(){
	int x;
	scanf("%d",&x);
	return x;
}

mitipo leemitipo(){
	mitipo x;
	x.e = leeent();
	x.n = leeent();
	x.d = leeent();
	return x;
}