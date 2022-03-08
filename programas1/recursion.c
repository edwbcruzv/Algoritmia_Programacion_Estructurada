#include<stdio.h>
/*
int ackermann(int n,int m)=  n+1 si m=0; 
                              ackermann(m-1,1) si m>0 y n=0;
                              ackermann(m-1,ackermann(m,n-1)) si m>0 y n>0

Fibonacci    fib(0)=0; fib(1)=1; fib(n)=f(n-1)+f(n-2)  */

int suma(int, int);  // suma:int,int->int
int sumatoria(int);
int factorial(int);

int main(){
    int r, s1, s2;
    
    printf("Dame los sumandos:");
    scanf("%d%d",&s1,&s2);

    printf("%d+%d=%d.\n",s1,s2,suma(s1,s2));
    printf("S(%d)=%d.\n",s1,sumatoria(s1));
    printf("%d!=%d.\n",s1,factorial(s1));    
    printf("%d!=%d.\n",suma(s1,s2),factorial(suma(s1,s2)));    
    
    return 0;   
}

int suma(int s1, int s2){
       if(s2==0)
           return s1;
       else
           return 1+suma(s1,s2-1);    
}

int sumatoria(int n){
    if(n==1)
        return 1;
    else
        return n+sumatoria(n-1);
}    

int factorial(int n){
     if((n>=0)&&(n<=1))
          return 1;  
     else
          return n*factorial(n-1);       
}
