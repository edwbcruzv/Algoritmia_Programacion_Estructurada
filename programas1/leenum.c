#include<stdio.h> 
//leer  n numeros y guardarlos en un arreglo. leerlos e imprimirlos por refrencia
void leeint(int*nums,int n);
void impint(int*nums,int n);

int main(){
	int ent[100],n;
	printf("¿Cuantos enteros quiere leer?:");
	scanf("%d",&n);
	printf("Ingrese los numeros:");
    leeint(ent, n);
	printf("------------------------\n");
    impint(ent, n);
	return 0;
}
void leeint(int*nums,int n){
	int i=0;
	while(n--)
		scanf("%d",&nums[i++]);	
}
void impint(int*nums, int n){
	int i=0;
	while(n--){
		printf("%d\n",nums[i++]);
	}
}
