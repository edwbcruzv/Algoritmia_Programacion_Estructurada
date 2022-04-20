#include<stdio.h>

int main(){
	char pal[85];//declaracion del arreglo
	scanf("%s",pal);//se lee la palabra y la guarda en la direccion de memoria del arreglo
	/////ciclo para contar cuantos caracteres tiene tu palabra
	int n=0;
	while(pal[n]!='\0'){
		n++;
	}
	///declaracion de variables	
	int x,y=n-1;
	// si es un arreglo impar se ejecuta esta opcion 
	if(n%2){ 
		for(x=0;x<((n-1)/2)-1;x++){// arreglo impar
			if(!(pal[x]==pal[y--])){ printf("No Es Palindromo");return 0;
			}
			}
			printf("Es Palindromo");
	}
	// si es un arreglo par se ejecuta esta opcion 
	else{
		for(x=0;x<(n/2)-1;x++){ //arreglo par
			if(!(pal[x]==pal[y--])){ printf("No Es Palindromo");return 0;
			}
			}
			printf("Es Palindromo");
	}
	
	return 0;
}
