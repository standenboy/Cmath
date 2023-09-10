#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<complex.h>
#include "util.h"

void error(){
	printf("cmath-qudfrm [A] [B] [C] Ax^2+Bx+C\n");
	exit(1); 
}

int main(int argc, char *argv[]){
	if (argc != 4){
		error();
	}

	if (isCleanInput(argc, argv) == 1){
		error();
	}
	
	// (-b+-squ(b^2-4(a)(c))) / 2(a)

	
	double a = atof(argv[1]);
	double b = atof(argv[2]);
	double c = atof(argv[3]);
	
	double root1;
	double root2;

	double realPart;
	double imagPart;

	double discriminant = b * b - 4 * a * c;
	
	if (discriminant > 0){
		root1 = (-b + sqrt(discriminant)) / (2 * a);
		root2 = (-b - sqrt(discriminant)) / (2 * a);
		printf("%lf\n%lf\n", root1, root2);	
	}else if (discriminant == 0){
		root1 = root2 = -b / (2 * a);
		printf("%lf\n%lf\n", root1, root2);
	}else {
		root1 = (-b + csqrt(discriminant)) / (2 * a);
		root2 = (-b - csqrt(discriminant)) / (2 * a);
		printf("%lf\n%lf\n", root1, root2);	
		
	}
			
	
	
	
	
	return 0;
}



