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
    //9 4 7 0 -1
    /*for(int x=0;x<n;x++){
        for(int y=0;y<n;y++){
            if(a[x]<a[y]){
                int t = a[x];
                a[x] = a [y];
                a[y] = t;
                printf("T");
            }
        }
    }*/
    for(int x=0;x<n-1;x++){
        for(int y=n-1;y>x;y--){
            if(a[x]>a[y]){
                int t = a[x];
                a[x] = a [y];
                a[y] = t;
                //printf("T");
            }
        }
    } //desc 3 - asc 1
    /*for(int x=0;x<n-1;x++){
        for(int y=n-1;y>x;y--){
            if(a[y]>a[y-1]){
                int t = a[y];
                a[y] = a [y-1];
                a[y-1] = t;
                printf("T");
            }
        }
    }*/ //desc -- asc 1
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
