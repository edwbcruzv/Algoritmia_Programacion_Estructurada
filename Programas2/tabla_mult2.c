/*definir una funcion que imprima x tabla de multiplicar
*/

#include<stdio.h>

void rtabla(int, int);

int main(){
	
	int n,i;
	printf("Digite el numero de la tabla que desea imprimir");
	scanf("%d",&n);
	printf("Digite el numero hasta donde desea que termine");
	scanf("%d",&i);
	rtabla(n,i);
	
	system("PAUSE");
	return 0;
}

void rtabla(int t,int i){
	if(i>=1){
		rtabla(t,i-1);
		printf("%d*%d=%d\n",t,i,t*i);
    }
}

