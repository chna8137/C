#include <stdio.h>

void main()
{
	FILE *wfp;
	int dan, num;

	wfp = fopen("c:\\c_study\\gugu.txt", "w");

	for(dan = 2; dan <= 9; dan++){
	fprintf(wfp, "#Á¦%d´Ü#  ", dan);
	}
	fprintf(wfp,"\n\n");

	for(num = 1; num <= 9; num++){
		for(dan = 2; dan <= 9; dan++){
			fprintf(wfp, "%dx%d=%d\t", dan, num, dan*num);
		}
		fprintf(wfp,"\n");
	}
	fclose(wfp);
	
}
