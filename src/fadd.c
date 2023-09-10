#include<stdio.h>
#include<stdlib.h>
#include "util.h"

void error(){
	printf("cmath-fadd [a] [b] [c]...\n");
	exit(1);
};

int main(int argc, char *argv[]){
	if (argc <= 1){
		error();
	}

	if (isCleanInput(argc, argv) == 1){
		error();
	}
	
	float total = 0;
	for (int i = 1; i < argc; i++){
		total = total + atof(argv[i]);
	}	
	
	printf("%f\n",total);
	
	return 0;
}
