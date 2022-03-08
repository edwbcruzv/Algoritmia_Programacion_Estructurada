#include <stdio.h>
void imint(int[][10],int,int);
/*Esta función no es la del profe, yo la hice a partir de su explicación
por ende, no es igual a la que el escribió*/
void cuadromagico(int[][10],int);
int main()
{
	int a=5;
	int cuadro[a][10];
    cuadromagico(cuadro,a);
	imint(cuadro,a,a);
	return 0;
}
void cuadromagico(int a[][10],int l){
    //inicializar matriz en 0
    int x, y;
    for(x=0;x<l;x++){
        for(y=0;y<l;y++){
            a[x][y] = 0;
        }
    }
    //crear cuadro magico
    int i,r=0,c=(l/2);
    for(x=1;x<=l*l;x++){
        if(a[r][c]==0){
            a[r][c] = x;
        } else {
            r = r + 2;
            c = c - 1;
            a[r][c] = x;
        }
        r--;
        c++;
        if(r<0){
            if(c==l){
                r = r + 2;
                c = c - 1;
            } else {
                r=l-1;
            }
        }
        if(c==l){
            c=0;
        }
    }
}
void imint(int a[][10],int r, int c){
	printf("\n");
	int i=0,j=0,l=0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("[ %d ]\t",a[i][j]);
		}
		printf("\n\n\n");
	}
}
