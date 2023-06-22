#include <stdio.h>

void main()
{
	int gugu[9][9];
	int i, k;
	
	
	for(i = 0; i < 8; i++){
		for(k = 0; k < 9; k++){
			gugu[i][k] = (i+2)*(k+1);
			printf("%2d x %2d = %2d",i+2,k+1,gugu[i][k]);
		}
		printf("\n");
	}
}
