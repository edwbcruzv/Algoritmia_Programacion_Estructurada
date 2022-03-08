#include
typedef struct usur{
	int NumCliente;
	int Dia;
	int Mes;
	int Año;
	float Lana;
}Cliente;


Cliente GuardaCliente(){
	Cliente c;
	int s;
	do{
		printf("Digite Numero de Criente: ");
		scanf("%d",&c.NumCliente);
		printf("\nConfirmar Numero:");
		scanf("%d",&s);
	}while(c.NumCliente!=s);
	
	printf("\nCantidad a depositar?: ");
	scanf("%f",&c.Lana);
	
	printf("introducir:\n\n ");
	do{
	printf("Año:\n");
	scanf("%d",&c.Año);
	}while((c.Año<=1990)||(c.Año>=2017));
	
	do{
	printf("Mes:\n");
	scanf("%d",&c.Mes);
	}while((c.Mes==0)||(c.Mes>12));
	
	
	
	

}

int Dias(int n){
	switch(n){
		case 1;return 31;break;
		
		return 30;break;return 28;break;
	}
}