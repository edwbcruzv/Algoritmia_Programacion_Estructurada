#include <stdio.h>
void lecad(char*);
int main(){
    int n=9;
    char pal[80];
    lecad(pal);
    while(n>0){
        printf("%s\n",pal);
        n--;
    }
    return 0;
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