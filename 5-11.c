#include <stdio.h>

void main()
{
	int a,b;
	char c=' ';

	printf("������ ���ٷ� ����� �Է��ϼ��� : ");
	scanf("%d", &a);
	scanf(" %c", &c);
	scanf("%d", &b);


	switch(c)
	{
		case '+' : printf("%d + %d = %d \n",a , b, a+b);
			 break;
			 
		case '-' : printf("%d - %d = %d \n",a, b, a-b);
			 break;

		case '*' : printf("%d * %d = %d \n",a, b, a*b);
			 break;

		case '/' : printf("%d / %d = %d \n",a, b, a/b);
			 break;

		case '%' : printf("%d %% %d = %d \n",a, b, a%b);
			 break;
		default :
			   printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}
