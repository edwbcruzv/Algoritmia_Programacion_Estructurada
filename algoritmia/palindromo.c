#include<stdio.h>

void palindromo(char pal[]);
int espalindromo(char pal[],int n);
int NumCar(char pal[]);

int main(){
	char pal[85];
	scanf("%s",pal);
	palindromo(pal);
	return 0;
}

void palindromo(char pal[]){
	int n=NumCar(pal);
	espalindromo(pal,n)?printf("Es Palindromo"):printf("No Es Palindromo");
}
int espalindromo(char pal[],int n){
	int x,y=n-1;
	if(n%2){
		for(x=0;x<((n-1)/2)-1;x++){// arreglo impar
			if(!(pal[x]==pal[y--])) return 0;
			}
			return 1;
	}
	else{
		for(x=0;x<(n/2)-1;x++){ //arreglo par
			if(!(pal[x]==pal[y--])) return 0;
			}
			return 1;
	}
}
int NumCar(char pal[]){
	int c=0;
	while(pal[c]!='\0'){
		c++;
	}
	return c;
}
