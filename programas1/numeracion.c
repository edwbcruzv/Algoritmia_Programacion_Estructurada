#include<stdio.h>

int main(){
	int i,x,g;
	printf("Digite en donde quiere empieze la numeracion:");
	scanf("%i",&g);
	printf("Digite hasta a donde quiere la numeracion:");
	scanf("%i",&x);
//-----------------for-------------------------
	for(i=g;i<=x;i++){    
		printf("--%i\n",i);
	} printf("\n");
//-----------------while-------------------------------
	i=g;	
	while(i<=x){
		printf("--%i\n",i);
		i++;
	} printf("\n");
//-----------------do-while-----------------------------
	i=g;
	do{
		printf("--%i\n",i);
		i++;
	}while(i<=x);printf("\n");
	return 0;
}
