#include<stdio.h>

int discriminante(float a,float b,float c);
int chicharronera(float d,float a,float b);

int main(){
	float a,b,c;	
	printf("\nDigites los digitos de a, b, c respectivamente: \n");
	scanf("%f%f%f",&a,&b,&c);
	discriminante(a,b,c);
	return 0;
}
int discriminante(float a,float b,float c){
	float d;
	d=(b*b)-(4*a*c);
	printf("El Discriminantes es: %.3f\n\n\n",d);
	chicharronera(d,a,b);    
}
int chicharronera(float d,float a,float b){
	float r,x1,x2;
	if(d>0){ r=sqrt(d);
	x1=((-1*b)-r)/(2*a);
	x2=((-1*b)+r)/(2*a);
	printf("----x1=%.3f \n\n----x2=%.3f",x1,x2);
}
	else{ d=d*(-1);
        r=sqrt(d); 
		printf("El Discriminante es negativa por lo tanto la raiz es un numero imaginario: %.2fi",r);
	} 	
}
