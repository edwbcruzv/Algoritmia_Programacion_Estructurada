#include<stdio.h>
int leecent(int cent[5][10]);
int impcent(int cent[5][10]);

int main(){
	int cent[5][10];
	leecent(cent);
	return 0;
}

int leecent(int cent[5][10]){
	int y,x;
	for(y=0;y<5;y++){
		for(x=0;x<10;x++){
		/*printf("Digite un numero para la matriz[%i][%i]",y+1,x+1);
		scanf("%i",&cent[y][x]);*/
		cent[y][x]=x+1*y+1;
		}
		
	}
	impcent(cent);
}

int impcent(int cent[5][10]){
	int y,x;
	for(y=0;y<5;y++){
		for(x=0;x<10;x++){
		printf("[%i]",cent[y][x]);
		}
		printf("\n");
	}
	return 0;
}

