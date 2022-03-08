#include <stdio.h>
//¿Que marca el fin de un arreglo en un apuntador de numeros?
void leint(int*,int);
void imint(int*,int);
void burbujita(int*,int);
int main()
{
    int n[5];
    leint(n,5);
    printf("Numeros sin ordenar:\n");
    imint(n,5);
    printf("Numeros ordenados:\n");
    burbujita(n,5);
    imint(n,5);
    return 0;
}
void burbujita(int * a, int n){
  /*int c1 = 0,c=0;
  while(c1 < n){
    int c2 = 0;
    while(c2 < n){
      //if(n[c1]>n[c2]){ Decreciente
      if(a[c1]<a[c2]){ //Creciente
        int temp = a[c2];
        a[c2] = a[c1];
        a[c1] = temp;
      }
      c2++;
    }
    c1++;
  }*/
  int j=0, t=0, i=n-1;
  while(j < i){
    while(j < i){
      if(a[i]<a[i-1]){
        int t = a[i];
        a[i] = a[i-1];
        a[i-1] = t;
      }
      i--;
    }
    i=n-1;
    j++;
  }
}
void leint(int * n,int t){
  int i = 0;
    while(i < t){
      printf("Dame el numero %d:\n",i+1);
      scanf("%d",n+i);
      i++;//t--;
    }
}
void imint(int * n,int t){
  int i = 0;
  while(t > i){
    printf("n[%d] = %d\n",i,n[i]);
    i++;//t--;
  }
}
