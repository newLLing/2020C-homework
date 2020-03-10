#include<stdio.h>
#include<stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

int n = 100;
struct ListNode* reverseList(struct ListNode* head);

struct ListNode* p;
struct ListNode* q=NULL;
struct ListNode* pre=NULL;
struct ListNode* reverseList(struct ListNode* head)
{
	if (head == NULL)
		return NULL;
	p = head;
	while (p)
	{
		q = p;
		ListNode* tmp = p->next;
		p->next = pre;
		pre = p;
		p = tmp;
	}
	return q;
}

