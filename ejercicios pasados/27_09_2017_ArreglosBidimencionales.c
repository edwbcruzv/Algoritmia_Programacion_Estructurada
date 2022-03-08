#include <stdio.h>
void leint(int[][10],int r, int c);
void imint(int[][10],int r, int c);
int main()
{
	int r,c;
	printf("Dame el numero de renglones:\n");
	scanf("%d",&r);
	printf("Dame el numero de columnas:\n");
	scanf("%d",&c);
	int n[r][10];
	leint(n,r,c);
	imint(n,r,c);
	return 0;
}
void leint(int a[][10],int r, int c){
	int i=0,j=0;
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
		    printf("a[%d,%d]:",i,j);
			scanf("%d",&a[i][j]);
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
			printf("{%d}",a[i][j]);
		}
		printf("\n");
	}
}
