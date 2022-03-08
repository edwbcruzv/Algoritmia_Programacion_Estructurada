int mcd(int a, int b){
    if(b==0)
        return a;
    else
        return mcd(b,a%b);    
    }

int mcm(int a, int b){ return a*b/mcd(a,b);}
