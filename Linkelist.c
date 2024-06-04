#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct _linked_list {
	int num;
	struct _linked_list* next;
} NODE;
typedef NODE* LINK;

LINK _head = NULL;

NODE* createNode(int num) {
	NODE* newNode = (NODE*)malloc(sizeof(NODE));
	newNode->num = num;
	newNode->next = NULL;
	return newNode;
}

NODE* append(LINK head, LINK newNode) {
	NODE* cur = head;

	if (head == NULL) head = newNode;
	else {
		while (cur->next != NULL) {
			cur = cur->next;
		}
		cur->next = newNode;
	}

	return head;
}

NODE* appendHead(LINK head, LINK newNode) {
	newNode->next = head;
	head = newNode;
	return head;
}
NODE* insertNode(LINK head, LINK newNode, int index) {
	LINK cur = head;
	LINK prev = head;
	int no = 0;

	if (head == NULL)
		return head;

	no = 1;
	while (cur != NULL) {
		if (no == index)
			break;
		prev = cur;
		cur = cur->next;
		no++;
	}

	if (cur == NULL)
		return head;

	printf("p: %d c: %d\n", prev->num, cur->num);

	if (prev == head) {
		head = appendHead(head, newNode);
	}
	else {
		prev->next = newNode;
		newNode->next = cur;
	}

	return head;
}

void printList(LINK head) {
	LINK cur = head;
	int no = 0;
	printf("=====================\n");
	while (cur != NULL) {
		printf("%d th Node : %d\n", ++no, cur->num);
		cur = cur->next;
	}
	printf("=====================\n");
}
int main(void) {
	printList(_head);
	LINK aNode = createNode(1);
	LINK bNode = createNode(2);
	LINK cNode = createNode(3);
	LINK dNode = createNode(4);
	_head = append(_head, aNode);
	_head = append(_head, bNode);
	_head = append(_head, cNode);
	_head = append(_head, dNode);
	printList(_head);

	LINK eNode = createNode(5);
	_head = insertNode(_head, eNode, 1);
	printList(_head);
	return 0;
}
