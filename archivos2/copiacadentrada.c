#include<stdio.h>

int main(int argc,char* argv[]){
	printf("%d\n",argc);
	while(argc--){
		printf("%hx\n",*argv++);
	}
	return 0;
}