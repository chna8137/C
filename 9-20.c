#include <stdio.h>

void main()
{
	int *p1, *p2;
	int a,b;
	int tmp = 0;

	printf("a �� �Է� : ");
	scanf("%d", &a);
	p1 = &a;

	printf("b �� �Է� : ");
	scanf("%d", &b);
	p2 = &b;

	tmp = *p2;
	*p2 = *p1;
	*p1 = tmp;

	printf("�ٲ� �� a�� %d, b�� %d",a,b);
}
