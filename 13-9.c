#include <stdio.h>
#include <malloc.h>

void main()
{
	struct student {
		char name[10];
		int age;
	};

	int count;

	
	printf("�Է��� �л� �� : ");
	scanf("%d", &count);

	struct student a;
	struct student *p = (struct student*) malloc(sizeof(struct student) * count);

	*p = a;
	int i;
	for(i=0; i < count; i++)
	{
		printf("�̸��� ���� �Է� : ");
		scanf("%s %d", (p + i)->name, &(p + i)->age);
	}

	
	printf("\n--- �л� ��� ---\n");
	for(i = 0; i < count; i++)
	{
		printf("�̸� : %s, ���� : %d\n", (p + i)->name, (p + i)->age);
	}
}

