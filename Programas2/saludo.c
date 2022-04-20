#include<stdio.h>

void impal(char*);


int main(){
     char pal[30];
     printf("¿Como te llamas?\n");
     scanf("%s",pal);
     printf("Buenos dias %s \n\n",pal);
     impal(pal);
     printf("Buenos dias %s",pal);
     return 0;
}
void impal (char*pal2){
              //printf("%s",pal2);
              pal2[0]='x';
              pal2[4]='y';
}


