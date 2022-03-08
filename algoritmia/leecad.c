#include<stdio.h>
int leecad(char pal[]);
int main(){
	char pal1[100],pal2[100];
	printf("Digite dos palabras\n");
	scanf("%s %s",pal1,pal2);
	(leecad(pal1)<=leecad(pal2))?printf("La cadena \"%s\" es mas grande que \"%s\" \n",pal2,pal1):
	printf("La cadena \"%s\" es mas grande que \"%s\" \n",pal1,pal2);
	//printf("%d\n",leecad(pal));
	return 0;
}
int leecad(char pal[]){
	int cent=0;
	while(pal[cent]!='\0')
		cent++;
	return cent;
}