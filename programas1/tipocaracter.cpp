#include <stdio.h>

int main(){

    char a;
    printf("teclea un caracter: ");   
    a=getchar();
    if(a<'0')
           printf("El caracter esta ala izquierda de los digitos");
     else if((a>='0')&&(a<='Z'))
                  printf("El caracter esta entre los digitos y letras mayusculas");
           else if((a>='A')&&(a<='z'))
                            printf("El caracter esta entre las letras mayusculas y minusculas");
                  else if(a>'z')
                            printf("El caracter esta a la derecha de las minusculas");


    return 0;
}
