#include<stdio.h>

int main(int argc,char* argv[]){

	printf("%d\n",argc);
	while(argc--){
		printf("%s\n",*argv++);
	}
	return 0;
}