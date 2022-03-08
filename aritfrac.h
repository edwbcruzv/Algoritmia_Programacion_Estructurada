typedef int entero;
typedef struct { 
             entero e;
             entero n;
             entero d;
             } fraccion;

fraccion leefrac(){
         fraccion a;
         
         scanf("%d",&a.e);
         scanf("%d",&a.n);
         scanf("%d",&a.d);
         return a;
}

fraccion impropia(fraccion f){
     f.n=f.n+(f.e*f.d);
     f.e=0;
     return f;
     }

fraccion reducefrac(fraccion f){
         entero a;
         
         a=mcd(f.n,f.d);
         
         f.e=f.e+(f.n/f.d); 
         f.n=f.n%f.d; 
         f.n=f.n/a;
         f.d=f.d/a;
         
         return f;
}

fraccion sumafrac(fraccion f1, fraccion f2){
         fraccion r;
         
         r.e=f1.e+f2.e;
         r.d=mcm(f1.d,f2.d);
         r.n=((r.d/f1.d)*f1.n)+((r.d/f2.d)*f2.n);
         return reducefrac(r);
         
         }
         
fraccion restafrac(fraccion f1, fraccion f2){
         fraccion r;
         r.e=0;
         f1=impropia(f1);
         f2=impropia(f2);
         r.d=mcm(f1.d,f2.d);
         r.n=((r.d/f1.d)*f1.n)-((r.d/f2.d)*f2.n);
         return reducefrac(r);
         
         }
         
fraccion multfrac(fraccion f1, fraccion f2){
         fraccion r;
         f1=impropia(f1);
         f2=impropia(f2);
         r.e=0;
         r.n=f1.n*f2.n;
         r.d=f1.d*f2.d;
         return reducefrac(r);
         }         

fraccion divfrac(fraccion f1, fraccion f2){
         fraccion r;
         f1=impropia(f1);
         f2=impropia(f2);
         r.e=0;
         r.n=f1.n*f2.d;
         r.d=f1.d*f2.n;
         return reducefrac(r);
         } 

void impfrac(fraccion a){ printf("%d[%d/%d]",a.e,a.n,a.d); }
