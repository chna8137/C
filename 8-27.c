#include <stdio.h>

void main()
{
	int gugu[9][9];
	int dan, num;

	for(num = 0; num < 9; num++){
		for(dan = 0; dan < 8; dan++){
			gugu[dan][num]=(dan+2)*(num+1);
			printf("%2d x %2d = %2d\t",dan+2,num+1,gugu[dan][num]);
		}
		printf("\n");
	}
}
