#include <stdio.h>

int main(int argc, char** argv){
	printf("Hello world!\n");
	if(argc > 1){
		printf("You have provided %d arguments\n", argc);
	} else {
		printf("You have not provided any additional arguments\n");
	}
	return 0;
}