#include<stdio.h>
/*
 r=no de renglones-+
 c=no de caracteres-+
 p=no de palabras-+
 v=no de vocales-+
 con=no de consonantes-+
 ma=no de mayusculas-+
 mi=no de minusculas-+
 es=no de espacios en blanco-+
*/
int EsVocal(char c);
int EsConsonante(char c);
int EsMayuscula(char c);
int EsMinuscula(char c);
int EsEspacio(char c);
int EsSaltodeRenglon(char c);
int EsDigito(char c);
int EsCaracter(char c);
int EsPalabra(char c);

int main(int argc,char* argv[]){
	FILE* ent=fopen(*++argv,"r");
	char x;
	int r,c,p,v,co,ma,mi,es;
	r=0;c=0;p=0;v=0;co=0;ma=0;mi=0;es=0;
	while(!feof(ent)){
		x=fgetc(ent);
		fprintf(stdout,"%c",x);
		if(EsMayuscula(x))
			ma++;
		if(EsMinuscula(x))
			mi++;
		if(EsConsonante(x))
			co++;
		if(EsVocal(x))
			v++;
		if(EsSaltodeRenglon(x))
			r++;
		if(EsCaracter(x))
			c++;
		if(EsEspacio(x))
			es++;
		if(EsPalabra(x))
			p++;
	}
	fclose(ent);
	printf("\nNo. De Mayusculas %d\nNo. De Minusculas %d\nNo. De Consonantes %d\nNo. De Vocales %d\nNo. De Saltos %d\nNo. De Caracteres %d\nNo. De Espacios %d\nNo. De Palabras %d\n",ma,mi,co,v,r,c,es,p);
	return 0;
}

int EsVocal(char c){
	switch(c){
		case 'A':case 'a':return 1;break;
		case 'E':case 'e':return 1;break;
		case 'I':case 'i':return 1;break;
		case 'O':case 'o':return 1;break;
		case 'U':case 'u':return 1;break;
		default:return 0;
	}
}
int EsConsonante(char c){
	return (!EsVocal(c));
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
	return ((c>='0')&&(c<='1'));
}
int EsCaracter(char c){
	return (EsMinuscula(c)||EsMayuscula(c)||EsDigito(c));
}
int EsPalabra(char c){
	return (EsEspacio(c)||EsSaltodeRenglon(c));
}
