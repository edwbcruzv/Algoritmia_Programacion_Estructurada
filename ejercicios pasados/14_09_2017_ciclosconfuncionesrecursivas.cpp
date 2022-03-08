//Definir una función que imprima tablas de multiplicar
#include <stdio.h>
void mTabla1(int,int);
void mTabla2(int,int);
void nmsg(int,char*);
void lecad(char*);
int main(){
    int b,l;
    printf("Ingresa n y m para generar la tabla de multiplicar\n");
    scanf("%d%d",&b,&l);
    mTabla1(b,l);
    printf("\n");
    mTabla2(b,l);
    char u[100];
    int n = 0;
    printf("Ingresa una cadena terminandola en #\n");
    lecad(u);
    printf("numero de repeticiones\n");
    scanf("%d",&n);
    nmsg(n,u);
    return 0;
}
void mTabla1(int t, int i){
    if(i>0){
        printf("%d x %d = %d\n",t,i,t*i);
        mTabla1(t,i-1);
    }
}
void mTabla2(int t, int i){
    if(i>0){
        mTabla2(t,i-1);
        printf("%d x %d = %d\n",t,i,t*i);
    }
}
void nmsg(int n, char * p){
    if(n>0){
        printf("%s\n",p);
        nmsg(n-1,p);
    }
}
void lecad(char * cad){
	char caracter;
	if((caracter=getchar()) == '#'){
		cad[0] = '\0';
	} else {
		cad[0] = caracter;
		lecad(cad+1);
	}
}