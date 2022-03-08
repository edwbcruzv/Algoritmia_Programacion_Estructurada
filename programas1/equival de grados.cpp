#include<stdio.h>

int main(){
	float n1,op=0;
	printf("Escriba los grados celcius: ");
	scanf("%.3f",&n1);
	op = ((n1)*(9/5))+ 32;
	printf("\n\nEn grados farenheint es:%.3f\n",op);
	return 0;
}
