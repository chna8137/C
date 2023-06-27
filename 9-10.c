#include <stdio.h>

void main()
{
	int a,b;
	int* p1, *p2;
	int tmp = 0;

	printf("a 값 입력 : ");
	scanf("%d", &a);
	p1 = &a;

	printf("b 값 입력 : ");
	scanf("%d", &b);
	p2 = &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐 값 a는 %d, b는 %d \n", a,b);
}
