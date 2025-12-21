/*#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct NODE {
	int data;
	struct NODE* pNext;
}N,*PN;
PN creat_list(void);
void bianli_list(PN phead);
int list_lengh(PN phead);
void sort_list(PN phead);
bool insert_list(PN phead, int pos, int val);
bool delet_list(PN phead, int pos, int* pval);
int main(void) {
	PN phead = NULL;//一开始链表没有被创建,头指针不指向
	//任何有效地址
	phead = creat_list();
	bianli_list(phead);
	int len=list_lengh(phead);
	//printf("链表长度为%d", len);
	//printf("\n");
	//sort_list(phead);
	insert_list(phead, 3, 6666);
	bianli_list(phead);
	printf("\n");
	int* deleted_val=(int*)malloc(sizeof(phead->data ));
	delet_list(phead, 3, deleted_val);//这里要的是
	bianli_list(phead);
	printf("%d", *deleted_val);
	return 0;
}

PN creat_list(void) {
	PN phead = (PN)malloc(sizeof(N));
	if (phead == NULL) {
		printf("分配内存失败！");
		exit(-1);
	}//创建头节点
        int len;
		int i;
		int val;
		PN pTail = phead;//创建一个始终指向末节点的指针
		pTail->pNext = NULL;
		printf("请输入链表个数：");
		fflush(stdout);
		scanf_s("%d", &len);
		for (i=0; i < len; i++) {
			printf("请输入第%d个节点的值：",i+1);
			fflush(stdout);
			scanf_s("%d", &val);
			PN pNew = (PN)malloc(sizeof(N));
			if (pNew == NULL) {
				printf("分配内存失败！");
				exit(-1);//创建单个节点
			}
			pNew->data = val;
			pTail->pNext = pNew;
			pNew->pNext = NULL;
			pTail = pNew;
		}3
	return phead;
}
void bianli_list(PN phead) {
	PN p = phead->pNext;
	while (p != NULL) {
		printf("%d", p->data);
		p = p->pNext;
		printf("\n");
	}	
      return;
}
int list_lengh(PN phead){
	PN p = phead->pNext;
	int count = 0;
	while(p != NULL) {
		++count;
		p = p->pNext;
		}
	return count;
}
void sort_list(PN phead) {
	int len = list_lengh(phead);
	PN p ,m;
	int i, j;//i要在上面定义，否则会认为p也是int型的如果在for里
	for ( i = 0,p = phead->pNext; i < len-1 ; i++,p=p->pNext  ) {
		for ( j = i + 1,m=p->pNext ; j < len ; j++,m=m->pNext ) {
			if (p->data > m->data) {
				int t=p->data ;
				p->data = m->data;
				m->data = t;
			}
		}
	}
	return;
 }
bool insert_list(PN phead,int pos,int val) {
	int i=0;
	PN p = phead;
	PN pNew = (PN)malloc(sizeof(N));
	while (p != NULL && i < pos - 1) {
		p=p->pNext;
		i++;
	}
	if (p == NULL ) {
		return false;
	}
	pNew->pNext = p->pNext;
	p->pNext = pNew;
	pNew->data = val;
	return true;
}
bool delet_list(PN phead, int pos, int* pval) {
	int i = 0;
	PN p = phead;
	PN pNew = (PN)malloc(sizeof(N));
	while (p != NULL && i < pos - 1) {
		p = p->pNext;
		i++;
	}
	if (p == NULL) {
		return false;
	}
	PN m = p->pNext;
	*pval = m->data;
	p->pNext = (p->pNext)->pNext;
	free(m);//这一步只是将m所指向的内存释放
	m = NULL;//防止指针变成野指针
	return true;
}*/