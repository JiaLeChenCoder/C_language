#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
struct ListNode
{
	int val;
	struct ListNode* next;
};

struct ListNode* removeElements(struct ListNode* head, int val) {
	struct ListNode* Head = malloc(sizeof(struct ListNode));
	Head->next = head;
	struct ListNode* temp = Head;
	while (temp->next != NULL) {
		if (temp->next->val == val) {
			temp->next = temp->next->next;
		}
		else {
			temp = temp->next;
		}
	}
	return Head->next;
}

int main()
{
	struct ListNode* n1 = (struct ListNode*)malloc(sizeof(struct ListNode));
	assert(n1);
	struct ListNode* n2 = (struct ListNode*)malloc(sizeof(struct ListNode));
	assert(n2);
	struct ListNode* n3 = (struct ListNode*)malloc(sizeof(struct ListNode));
	assert(n3);
	struct ListNode* n4 = (struct ListNode*)malloc(sizeof(struct ListNode));
	assert(n4);
	n1->val = 7;
	n2->val = 7;
	n3->val = 7;
	n4->val = 7;

	n1->next = n2;
	n2->next = n3;
	n3->next = n4;
	n4->next = NULL;

	n1 = removeElements(n1, 7);

	return 0;
}