#include<stdio.h>

int main(){
	char a[20],b[20];
	printf("Digite dos palabras: ");
    scanf("%s %s",&a,&b);
    
	if(strcasecmp(a,b)>0)
	   printf("%s es mayor lexicograficamente que %s",a,b);
	else if(strcasecmp(a,b)==0)
	        printf("%s es igual lexicograficamente que %s",a,b);	
	     else
	        printf("%s es menor lexicograficamente que %s",a,b);	
	return 0;
}



