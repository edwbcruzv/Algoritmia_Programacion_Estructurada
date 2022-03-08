//LIBRERIAS EXTERNAS////////////////////////////////
#include <stdio.h> //Para salidas y entradas
////VARIABLES//////////////////////////////////////
//typedef int entero;
typedef struct
{
	int e; //entero
	int n; //numerador
	int d; //denominador
}fraccion;
////FUNCIONES ARITMETICAS//////////////////////////
//F. Máximo Común Divisor
int mcd(int a, int b){
  if (b==0) {
    return a;
  } else {
    return mcd(b,a%b);
  }
}
//F. Mínimo Común Múltiplo
int mcm(int a, int b){
  //Teniendo mcd(a,b)*mcm(a,b)=a*b -> despejamos
  return (a*b)/mcd(a,b);
}
//F. Suma de Fracciones
fraccion FracSum(fraccion a, fraccion b){
	fraccion f;
	f.d = mcm(a.d,b.d);
	f.n = (f.d/a.d*a.n)+(f.d/b.d*b.n);
	return f;
}
//F. Resta de Fracciones
fraccion FracRes(fraccion a, fraccion b){
	fraccion f;
	f.d = mcm(a.d,b.d);
	f.n = (f.d/a.d*a.n)-(f.d/b.d*b.n);
	return f;
}
//F. Multiplicación de Fracciones
fraccion FracMul(fraccion a, fraccion b){
	fraccion f;
	f.d = a.d * b.n;
	f.n = a.d * a.n;
	return f;
}
//F. División de Fracciones
fraccion FracDiv(fraccion a, fraccion b){
	fraccion f;
	f.d = a.d * b.d;
	f.n = a.n * a.n;
	return f;
}
//F. Simplificación de Fracciones
fraccion FracSim(fraccion x){
	//Pendiente....
}
////FUNCIONES PARA ENTRADAS///////////////////////
int LeeInt(){
	int x;
	scanf("%d",&x);
	return x;
}

fraccion LeeFrac(){
	fraccion x;
	x.e = LeeInt();
	x.n = LeeInt();
	x.d = LeeInt();
	x.n += (x.e * x.d);//Se pasa a fraccion impropia
	x.e = 0;
	return x;
}
////FUNCIONES PARA SALIDAS////////////////////////
void ImpFrac(fraccion x){
	printf("%d/%d\n",x.n,x.d);
}
