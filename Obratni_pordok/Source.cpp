#include "stdio.h"
#include "stdlib.h"
#include<conio.h>
struct Node
{
	int Value;
	Node* next;
};

Node* Push_Stack(Node *Head, int value)
{
	Node* a = (Node*)malloc(sizeof(Node));
	a->Value = value;
	a->next = Head;
	return a;
}

Node* Pop1(Node* head)
{
	if (head == NULL)
		return NULL;
	Node* k = head;
	head = head->next;
	free(k);
	return head;
}
Node*  reverse(Node* head)
{
	Node* head2 = NULL;
	while (head!=NULL) {
		head2=Push_Stack(head2, head->Value);
		head=Pop1(head);
	}
	return head2;
}
void Show(Node* head)
{
	while (head) {
		printf("%d ", head->Value);
		head = head->next;
	}
}

int main()
{
	Node* a = NULL;
	int i = 0;
	for(i=0;i<10;i++)
	a = Push_Stack(a,i);
	Show(a);
	putchar('\n');
	a = reverse(a);
		Show(a);
	_getch();
	return 0;
}

/*struct Node // авл структура 
{
	Node* left;
	Node* right;
	int key, counter, bal;
};*/
