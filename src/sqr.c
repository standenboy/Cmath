#include<stdio.h>
#include<stdlib.h>
#include "util.h"

void error(){
	printf("sqr [a]\n");
	exit(1);
}
int main(int argc, char *argv[]){
	if (argc != 2){
		error();
	}
	
	if (isCleanInput(argc, argv) == 1){
		error();
	}
	
	int total = atoi(argv[1]) * atoi(argv[1]);

	printf("%d\n",total);

	return 0; 
}	
