#ifndef listg_h
#define listg_h
#include <stdlib.h>
#include <stdio.h>
#define n 11
#define m 3

typedef int DataType;

typedef struct node_{
	DataType data;
	struct node_ *next;
} Node;

typedef struct list_{
	Node *head;
	Node *tail;
	Node *current;
} List;

void initList(List *);
void addHead(List *, DataType);
void addTail(List *, DataType);
void delNode(List *, DataType);
Node *getNode(List *, DataType);
int getLength(List *);
void dispList(List *);
void zyl();
#endif
