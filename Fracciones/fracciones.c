#include<stdio.h>
#include"tipofrac.h"

int main(){
	Fraccion r,d;
	while(1){
	d=LeeFrac();
	r=Impropia(d);
	ImpFrac(r);
	}
	return 0;
}
