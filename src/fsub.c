#include<stdio.h>
#include<stdlib.h>
#include "util.h"

void error(){
	printf("cmath-fsub [a] [b] [c]...\n");
	exit(1);
};

int main(int argc, char *argv[]){
	if (argc <= 1){
		error();
	}

	if (isCleanInput(argc, argv) == 1){
		error();
	}
	
	float toRemove = 0;
	for (int i = 2; i < argc; i++){
		toRemove = toRemove + atof(argv[i]);
	}


	float total = atof(argv[1]) - toRemove; 
	
	printf("%f\n",total);
	
	return 0;
}
