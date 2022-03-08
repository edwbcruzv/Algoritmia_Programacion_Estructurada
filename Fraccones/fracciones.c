#include<stdio.h>
#include"miarit.h"
#include"aritfrac.h"

int main(){
   
        fraccion f1, f2 ,r;
        
        f1=leefrac(); f2=leefrac(); //z=leefrac();
//        impfrac(reducefrac(x));
//        impfrac(impropia(x));
//        impfrac(sumafrac(x,y));
          impfrac(divfrac(f1,f2)); printf("\n");
//        impfrac(multfrac(x,y));
//        impfrac(reducefrac(multfrac(x,sumafrac(y,x))));

    
    return 0;
}


