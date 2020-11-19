#include "listg.h"

void initList(List *list){
		list->head = NULL;
		list->tail = NULL;
		list->current = NULL;

		return;
}

void addHead(List *list, DataType data){
	//1.创建第一个节点
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	//2.插入节点准备
	if(list->head ==NULL){
		list->tail = node;
	}else{
		node->next = list->head;
	
	//3.插入节点
	}
	list->head = node;

	return;
}

void addTail(List *list,DataType data){
	//1
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = data;
	node->next = NULL;

	//2
	if(list->head ==NULL){
		list->head = node;
	}else{
		list->tail->next = node;
	}

	//3
	list->tail = node;

	return;
}

void delNode(List *list, DataType data){
	Node *prev = list->head;
	Node *node = prev->next;

	while(node != NULL){
		if(node->data == data){
			prev->next = prev->next->next;
		}else{
			prev->next = node;
		}
	}
}

Node *getNode(List *list,DataType data){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;

	while(node != NULL){
		if(data ==node->data){
			return node;
		}else{
			node = node->next;
		}
	}

	return NULL;
}

int getLength(List *list){
	Node *node = (Node*)malloc(sizeof(Node));
	node = list->head;
	int i =0;
	while(node !=NULL){
		node = node->next;
		i++;
	}

	return i;
}

void dispList(List *list){
	Node *node = (Node *)malloc(sizeof(Node));
	node = list->head;
	int i=0;
	while(node !=NULL){
		printf("the %dth node): %d\n", i + 1,node->data);
		node = node->next;
		i++;
	}
	printf("display finished\n");

	return;
}

void zyl() {
	int k = 0;
	Node *p, *q, *r;
	p = q = (Node*)malloc(sizeof(Node));  //创建第一个节点
	p -> data = 1;
	for (int i = 2; i<=n; i++){
		r = (Node*)malloc(sizeof(Node));
		r->data = i;
		q->next = r;
		q = r;
	}
	q = p;
	while (q->next !=q){
		k++;
		if (k == m){
			p->next = q->next;
			free(q);
			q = p->next;
			k = 0;
		}else{
			p = q;
			q = q->next;
		}
	}
	printf("最后一个获胜者的编号是： %d\n", q->data);
}



