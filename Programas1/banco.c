#include<stdio.h>
#include<stdlib.h>
typedef struct fch{
	int Dia;
	int Mes;
	int Anio;
}*Fecha;

typedef struct datos{
	int NumCliente;
	int NumCuenta;
	Fecha fc;
	int NumSuc;
	float Dinero;
}*Cliente;

Cliente LeeCliente();
void ImpCliente(Cliente c);

int main(){
	Cliente c1,c2,c3;
	c1=LeeCliente();
	ImpCliente(c1);
}

Cliente LeeCliente(){
	Cliente c=(Cliente)malloc(sizeof(struct datos));
	
	printf("Digite el numero de cliente: ");
	scanf("%d",&c->NumCliente);
	printf("Digite el numero de cuenta: ");
	scanf("%d",&c->NumCuenta);
	printf("Digite la fecha dia/mes/anio respectivamente: ");
	scanf("%d %d %d",&c->fc->Dia,&c->fc->Mes,&c->fc->Anio);
	printf("Numero de sucursal: ");
	scanf("%d",&c->NumSuc);
	printf("Cantidad de dinero: ");
	scanf("%f",&c->Dinero);
	return c;
}

void ImpCliente(Cliente c){
	printf("\nnumero de cliente: %d",c->NumCliente);
	printf("\nnumero de cuenta: %d",c->NumCuenta);
	printf("\nfecha: %d %d %d",c->fc->Dia,c->fc->Mes,c->fc->Anio);
	printf("\nNumero de sucursal: %d",c->NumSuc);
	printf("\nCantidad de dinero: %f",c->Dinero);
}