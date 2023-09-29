#include<stdio.h>
int main() {
	int i, j, r;
	for (i = 1; i <= 5; i++) {
		for (j = 0; j < 5 - i; j++) {
			printf(" ");
		}
		for(r = 1; r <= 2*i-1 ; r++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
 }
