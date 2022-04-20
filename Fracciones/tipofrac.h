///DEFINICION DE TIPO INT A ENTERO
typedef int Entero;
///DECLARACION DE LA ESTRUCTURA-----------------------------------------
typedef struct{
	Entero E;
	Entero N;
	Entero D;
}Fraccion;
//----------DECLARACION DE FUNCIONES------------------------------------
Fraccion Reducir(Fraccion F1);
int MCD(int N,int D);
Fraccion Impropia(Fraccion F1);
Fraccion MultFrac(Fraccion F1,Fraccion F2);
Fraccion DivFrac(Fraccion F1,Fraccion F2);
Fraccion Mixta(Fraccion F1);

///IMPRIMIR FRACCION----------------------------------------------------
void ImpFrac(Fraccion F){
	printf("%d[%d/%d]\n",F.E,F.N,F.D);
}
///LECTURA DE LA FRACCION-----------------------------------------------
Fraccion LeeFrac(){
	Fraccion F;
	//do{
	printf("Digite una Fraccion e [n/d]: ");
	scanf("%d %d %d",&F.E,&F.N,&F.D);
	//}while(F.D==0);
	return F;
}
///MULTIPLICACION DE 2 FRACCIONES----------------------------------------
Fraccion MultFrac(Fraccion F1,Fraccion F2){
	Fraccion F;
	F1=Impropia(F1);
	F2=Impropia(F2);
	F.E=0;
	F.N=F1.N*F2.N;
	F.D=F1.D*F2.D;
	return F;
}
///DIVISION DE FRACCIONES------------------------------------------------
Fraccion DivFrac(Fraccion F1,Fraccion F2){
	Fraccion F;
	F1=Impropia(F1);
	F2=Impropia(F2);
	F.E=0;
	F.N=F1.N*F2.D;
	F.D=F1.D*F2.N;
	return F;
}
///CONVERTIR UNA FRACCION MIXTA A IMPROPIA-------------------------------
Fraccion Impropia(Fraccion F1){
	Fraccion F;
	F.E=0;
	if((F1.N!=0)&&(F1.D!=0)){
		F.N=(F1.E*F1.D)+F1.N;
		F.D=F1.D;
	}
	else if(F1.E!=0){
			F.N=F1.E;
			F.D=1;
		}
		else{
			F.N=0;
			F.D=0;
		}
	
	return F;
}
///CONVERTIR UNA FRACCION IMPROPIA A MIXTA-------------------------------
Fraccion Mixta(Fraccion F1){
	Fraccion F;
	if((F1.N!=0)&&(F1.D!=0)){
		if(F1.N>=F1.D){
			F.E=((F1.N)/(F1.D))+(F1.E);
			if((F1.N%F1.D)==0){
				F.N=0;
				F.D=0;
			}
			else{
				F.N=F1.N%F1.D;
				F.D=F1.D;
			}
			return F;
		}
		return F1;
	}
	else{
			F.E=F1.E;
			F.N=0;
			F.D=0;
		}
	return F;
}
///EQUIVALENTE DE UNA FRACCION-------------------------------------------
Fraccion Reducir(Fraccion F1){
	Fraccion F;
	F.E=F1.E;
	F.N=F1.N/MCD(F1.N,F1.D);
	F.D=F1.D/MCD(F1.N,F1.D);
	return F;
}
///MINIMO COMUN MULTIPLO-------------------------------------------------
int MCM(int N1,int N2){
	return (N1*N2)/MCD(N1,N2);
}
///MINIMO COMUN DIVISOR--------------------------------------------------
int MCD(int N,int D){
	if(N==0||D==0)
		return 0;
		if(D>N)
			return MCD(D,N);
		else if(N==D)
				return N;
			else if(N>D)
				return MCD(N-D,D);
				else if(N==0||D==0)
					return 0;
}
///SUMA DE DOS FRACCIONES------------------------------------------------
Fraccion SumaFrac(Fraccion F1,Fraccion F2){
	Fraccion F;
	F1=Impropia(F1);
	F2=Impropia(F2);
	F.E=0;
	F.N=F1.N*F2.D+F2.N*F1.D;
	F.D=F1.D*F2.D;
	return Mixta(F);
}
///RESTA DE DOS FRACCIONES-----------------------------------------------
Fraccion RestaFrac(Fraccion F1,Fraccion F2){
	Fraccion F;
	F1=Impropia(F1);
	F2=Impropia(F2);
	F.E=0;
	F.N=F1.N*F2.D-F2.N*F1.D;
	F.D=F1.D*F2.D;
	return Mixta(F);
}