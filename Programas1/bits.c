#include<stdio.h>

int main(){
	int c=1;
	long int a=1;
	while(a>0){
		printf("%d\t%ld\n",c,a);
		c++;a=a<<1;
	}
	
}
