/*#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct NODE {
	int data;
	struct NODE* pNext;
}N, * PN;
typedef struct STACK {
	struct NODE* pTop;
	struct NODE* pBottom;
}S,*PS;
void init(PS ps);
void push(PS ps, int val);
void bianli(PS ps);
bool is_empty(PS ps);
bool pop(PS ps, int* pval);
bool clear(PS ps);



int main() {
	S s;
	int val;
	init(&s);
	push(&s, 10);
	push(&s, 100);
	push(&s, 1000);
	bianli(&s);
	if (pop(&s, &val)) {
		printf("出栈成功，出栈数据是%d", val);
	}
	else { printf("出栈失败！"); }
	printf("\n");
	bianli(&s);
	clear(&s);
	pop(&s, &val);
	return 0;
}
void init(PS ps) {
	ps->pTop = (PN)malloc(sizeof(NODE));
	if (ps->pTop == NULL) {
		printf("内存分配失败！");
		exit(-1);
	}
	ps->pBottom = ps->pTop;
	ps->pTop->pNext = NULL;
}
void push(PS ps,int val) {
	PN pNew= (PN)malloc(sizeof(NODE));
	if (pNew == NULL) {
		printf("内存分配失败！");
		exit(-1);
	}
	else {
		pNew->pNext = ps->pTop;
		ps->pTop = pNew;
		pNew->data = val;
	}
}
void bianli(PS ps) {
	PN p = ps->pTop;
	while (p != ps->pBottom ) {
		printf("%d", p->data);
		p = p->pNext;
		printf("\n");
	}
	return ;
}
bool is_empty(PS ps) {
	if (ps->pBottom == ps->pTop) {
		return true;
	}
	else {
		return false;
	}
}
bool pop(PS ps,int*pval) {
	if (is_empty(ps)) {
		printf("此栈为空！");
		return false;
	}
	else {
		PN r;
		r = ps->pTop;
		*pval = ps->pTop->data;
		ps->pTop = ps->pTop->pNext;
		free(r);//使r指向的内存释放
		r = NULL;//使r指向空指针
	}
	return true;
}
bool clear(PS ps) {
	PN p;
	PN q;
	if (is_empty(ps)) {
		printf("此栈为空！");
		return false;
	}
	else {
		p = ps->pTop;
		q = NULL;
		while (p != ps->pBottom ) {
			q = p->pNext;
			free(p);
			p = q;
		}ps->pTop = ps->pBottom ;
	}return true;
}
*/