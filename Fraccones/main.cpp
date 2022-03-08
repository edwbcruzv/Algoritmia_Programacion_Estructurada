#include <stdio.h>
#include "OrganicWaves.h"

int main(){
    fraccion t1 = LeeFrac();
    ImpFrac(t1);
    fraccion t2 = LeeFrac();
    ImpFrac(t2);
    fraccion t3 = FracSum(t1,t2);
    ImpFrac(t3);
	return 0;
}
