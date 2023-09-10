#include<stdio.h>
#include<stdlib.h>
#include<complex.h>
#include "util.h"

void error(){
	printf("sqt [a]\n");
	exit(1);
}
int main(int argc, char *argv[]){
	if (argc != 2){
		error();
	}
	
	if (isCleanInput(argc, argv) == 1){
		error();
	}
	
	float total = csqrt(atof(argv[1]));

	printf("%f\n",total);

	return 0; 
}	
