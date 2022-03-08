#include<stdio.h>

int EsVocal(char c);
int EsConsonante(char c);
int EsMayuscula(char c);
int EsMinuscula(char c);
int EsEspacio(char c);
int EsSaltodeRenglon(char c);
int EsDigito(char c);
int EsCaracter(char c);
int EsPalabra(char c);

int main(){
	char x;
	printf("Digite: ");
	scanf("%c",&x);
		if(EsCaracter(x))
			printf("Es Caracter\n\n");
		if(EsMayuscula(x))
			printf("Es Mayuscula\n\n");
		if(EsMinuscula(x))
			printf("Es Minuscula\n\n");
		if(EsConsonante(x))
			printf("Es Consonante\n\n");
		if(EsVocal(x))
			printf("Es Vocal\n\n");
		if(EsSaltodeRenglon(x))
			printf("Es salto de renglon\n\n");
		if(EsDigito(x))
			printf("Es Numero\n\n");
	main();
}	
int EsVocal(char c){
	switch(c){
		case 'A':case 'a':
		case 'I':case 'i':
		case 'O':case 'o':
		case 'U':case 'u':return 1;break;
		default:return 0;
	}
}
int EsConsonante(char c){
	return (!EsVocal(c)&&!(EsDigito(c)));
}
int EsMayuscula(char c){
	return ((c>='A')&&(c<='Z'));
}
int EsMinuscula(char c){
	return ((c>='a')&&(c<='z'));
}
int EsEspacio(char c){//cuenta tambien para palabras
	return (c==' ');
}
int EsSaltodeRenglon(char c){
	return (c=='\n');
}
int EsDigito(char c){
	return ((c>='0')&&(c<='9'));
}
int EsCaracter(char c){
	return (EsMinuscula(c)||EsMayuscula(c));
}
int EsPalabra(char c){
	return (EsEspacio(c)||EsSaltodeRenglon(c));
}
