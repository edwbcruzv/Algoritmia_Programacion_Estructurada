#include<stdio.h>
#include<stdlib.h>

int main(){
	float *t,*c,f=0;
	c=(float*)malloc(sizeof(float)*5);
	t=c;
	int i=0,g=5;
	while(g--)
		scanf("%f ",t[i++]);
	g=5;i=0;
	while(g--)
		printf("%f ",t[i++]);
	g=5;
	while(g--)
		f=f+*c++;
	printf("%f ",f);
}