#include<stdio.h>
#include<stdlib.h>
#include "util.h"

void error(){
	printf("cmath-sub [a] [b] [c]...\n");
	exit(1);
};

int main(int argc, char *argv[]){
	if (argc <= 1){
		error();
	}

	if (isCleanInput(argc, argv) == 1){
		error();
	}
	
	int toRemove = 0;
	for (int i = 2; i < argc; i++){
		toRemove = toRemove + atoi(argv[i]);
	}


	int total = atoi(argv[1]) - toRemove; 
	
	printf("%d\n",total);
	
	return 0;
}
