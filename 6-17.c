#include <stdio.h>

void main()
{
	int i, k;

	for(k = 2; k <= 9; k++){
		printf(" #��%d��#    ",k);
	}printf("\n\n");

	for(i = 1; i <= 9; i++){
		for(k = 2; k <= 9; k++){
			printf("%2d x %2d = %2d", k , i, k*i);
		}
		printf("\n");
	}
}
	
