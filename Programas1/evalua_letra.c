#include<stdio.h>
int esmayuscula(char x){return (x>='A')&&(x<='Z');}
int esminuscula(char x){return (x>='a')&&(x<='z');}
int esdigito(char x){return (x>='0')&&(x<='9');}
int esletra(char x){return (esmayuscula(x))||(esminuscula(x));}

int main(){
	char x=getchar();
/*	if(esmayuscula(x)) printf("Es Mayuscula");
	else if(esminuscula(x))  printf("Es Minuscula");  
	     else    */
		 if(esdigito(x)) printf("Es Digito");
	          else 
                  if(esletra(x))  printf("Es Letra");    //solo pregunta si es letra o no
	              else
				   printf("No es nada");   	
}


