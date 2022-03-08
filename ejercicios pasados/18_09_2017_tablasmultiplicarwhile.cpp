#include<stdio.h>
void tbmpro(int,int);
int main(){
    int n,l;
    printf("Dame el numero a multiplicar\n");
    scanf("%d",&n);
    printf("Dame el numero hasta cual multiplicar\n");
    scanf("%d",&l);
    tbmpro(n,l);
    return 0;
}
void tbmpro(int n, int l){
    int i=1;
    while(i<=l){
        printf("%d x %d = %d\n",n,i++,n*i);
    }
}