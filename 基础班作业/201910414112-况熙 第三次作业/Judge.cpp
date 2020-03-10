#include<stdio.h>
#include<stdlib.h>

 struct Student {
	char name[10];
	char stu_id[15];
	int age;
	struct Student* next;
};
void fun(struct Student*head);
struct Student* head = (struct Student*)malloc(sizeof(struct Student));
struct Student  a;

void fun(struct Student* head)
{
	 
	if (head == NULL)
	{
		head = &a;
		printf("请建立一个链表:");
		gets_s(a.name);
		gets_s(a.stu_id);
		scanf_s("%d", &a.age);
		struct Student* next = NULL;
		
	}
	else
	{
		printf("%d\n", head->age);
		printf("%d\n", *head->name);
		printf("%d\n", *head->stu_id);
		printf("是否还需要增加节点:y for yes,n for no");
		char judge=getchar();
		if (judge == 'y')
		{
			struct Student add;
			gets_s(add.name);
			gets_s(add.stu_id);
			scanf_s("%d", &add.age);
			struct Student* next = &add;
		}
		else
			printf("结束");

		
	}
}