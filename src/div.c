#include<stdio.h>
#include<stdlib.h>
#include "util.h"

void error(){
	printf("cmath-div [a] [b]\n");
	exit(1);
};

int main(int argc, char *argv[]){
	if (argc != 3){
		error();
	}
	
	if (isCleanInput(argc, argv) == 1){
		error();
	}

	int total = atoi(argv[1]) / atoi(argv[2]);
	
	printf("%d\n",total);	
	return 0;
}
