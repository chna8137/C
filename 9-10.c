#include <stdio.h>

void main()
{
	int a,b;
	int* p1, *p2;
	int tmp = 0;

	printf("a �� �Է� : ");
	scanf("%d", &a);
	p1 = &a;

	printf("b �� �Է� : ");
	scanf("%d", &b);
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("�ٲ� �� a�� %d, b�� %d \n", a,b);
}
