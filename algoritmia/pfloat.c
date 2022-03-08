#include<stdio.h>
#include<stdlib.h>
float* LeeFloat();

int main(){
	int i=0;
	int g=5,h=5;
	float *array[g];
	while(g--){
		array[i++]=LeeFloat();
	}
	i=0;
	while(h--){
		printf("%.2f ",*array[i++]);
	}	
}
float* LeeFloat(){
	float g,*c;
	printf("Dijite un flotante: ");
	scanf("%f",&g);
	c=(float*)malloc(sizeof(float));
	*c=g;
	return c;
}