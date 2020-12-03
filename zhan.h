#ifndef zhan_h
#define zhan_h
#include <malloc.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

typedef int dataType;

typedef struct node{
    dataType data;
    struct node *next;
    int size;
} LinkStack,node;

LinkStack* InitStack();
int priority(char x);
int Empty(LinkStack *);
void Push(LinkStack *, dataType);
void Pop(LinkStack *);
dataType GetTop(LinkStack *);
double compute(double x,double y, char z);
void dis(LinkStack *);
int zyl();
#endif
