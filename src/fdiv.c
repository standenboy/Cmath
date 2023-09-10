#include<stdio.h>
#include<stdlib.h>
#include "util.h"

void error(){
	printf("cmath-fdiv [a] [b]\n");
	exit(1);
};

int main(int argc, char *argv[]){
	if (argc != 3){
		error();
	}
	
	if (isCleanInput(argc, argv) == 1){
		error();
	} 

	float total = atof(argv[1]) / atof(argv[2]);
	
	printf("%f\n",total);	
	return 0;
}
