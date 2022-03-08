#include <stdio.h>
typedef int entero;
void impent(entero);
entero suma(entero,entero);
int main(){
	entero a,b,c;
	scanf("%d%d",&a,&b);
	c = suma(a,b);
	impent(c);
	return 0;
}
void impent(entero x){
	printf("%d\n",x);
}
entero suma(entero x, entero y){
	return x+y;
}
// gcc x.c -o gg
// ./gg