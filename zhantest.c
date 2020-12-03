#include "zhan.h"
int main(){
    LinkStack *s = (LinkStack *)malloc(sizeof(LinkStack));
    Push(s, 4);
    Push(s, 6);
    Push(s, 9);
    Push(s, 26);
    Push(s, 80);
    Empty(s);
    Pop(s);
    dis(s);
    printf("getTop; %d\n", GetTop(s));
    zyl();
    return 0;
}
