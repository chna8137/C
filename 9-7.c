#include <stdio.h>

void main()
{
	char ch;
	char* p;
	char* q;

	ch = 'A';
	p = &ch;

	q = p;

	*q = 'Z';

	printf("ch가 가지고 있는 값 : ch ==> %c \n\n", ch);
}
