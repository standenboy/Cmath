#include<ctype.h>

int isInt(char str[]){
	for (int i = 0; i < sizeof(*str); i++){
		if (isalpha(str[i]) != 0){
			return 1;
		}	
	}
	return 0;
}
	
int isCleanInput(int count, char *input[]){	
	for (int i = 1; i < count; i++){
		if (isInt(input[i]) != 0){
			return 1;
		}
	}
	return 0;
}
