#include<stdio.h>

typedef struct Student {
	char name[10];
	char stu_id[15];
	int age;
	char sex[5];
}student;
student* find_id(char id[], student stus[], int num);

student* find_id(char id[], student stus[], int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		if (id == stus[i].stu_id)
		{
			return &stus[i];
		}
	}
		return NULL;
}