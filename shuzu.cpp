/*#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct Arr {
	int* pbase;//数组首地址
	int len;//数组最大长度
	int count;//数组有效长度
}a;//定义一个散装数组
void init(a* parr, int lengh);//初始化这个数组
bool is_empty(a* parry);
void show(a* parry);
bool append(a* parry, int val);
bool is_full(a* parrt);
bool insert(a* parry, int val, int pos);
bool delete_(a* parry, int pos);
bool inversion(a* parry);
int main(void) {
	a arr;
	init(&arr,6);
	append(&arr, 1);
	append(&arr, 3);
	append(&arr, 4);
	insert(&arr, 2, 2);
	//delete_(&arr, 2);
	inversion(&arr);
	show(&arr);

	return 0;
}
void init(a* parr,int lengh) {
	parr->pbase = (int*)malloc(sizeof(int) * lengh);
	if (NULL == parr->pbase) {
		printf("内存分配失败"); 
		exit(-1);//终止整个程序
	}
	else {
		parr->count = 0;
		parr->len = lengh;
	}
	return;
}
void show(a* parry) {
	if (is_empty(parry))//show的形参传的就是结构体的一个元
//素的首地址（数组首地址）parry本身就是一个指针，所以调用
//empty的时候直接传parry就行。
	{
		printf("数组为空");
	}
	else {
		for (int i = 0; i < parry->count; i++)//i一定要从0
			//开始，要不然输出不了数组第一个值。
		{
			printf("%d", parry->pbase[i]);
			printf("\n");

		}

	}
}
	bool is_empty(a * parry) {
		if (parry->count == 0) {
			return true;
		}
		else { return false; }
        }
	bool append(a* parry, int val) {
		if (is_full(parry)) //full函数是被调函数，形参要和
			//append函数统一。
		{
			printf("数组空间已满！");
		}
		else {
			parry->pbase[parry->count] = val;
			(parry->count)++;
             }
	      return 0;
	}
	bool is_full(a*parrt) {
		if (parrt->count >= parrt->len) {
				return true;
		}
		else { return false; }
	
	}
	bool insert(a* parry, int val, int pos) {
		if (is_full(parry)) {
			printf("数组已满，无法插入元素！");
		}
		else {
			for (int i = (parry->count) - 1; i >= pos - 1; --i) {
				parry->pbase[i + 1] = parry->pbase[i];
			}
			parry->pbase[pos - 1] = val;
			parry->count++;//一定要记得把有效长度自增
		}return true;
	}
	bool delete_(a* parry, int pos) {
		if (is_empty(parry)) {
			printf("数组为空，无法删除！");
		}
		else if (pos<0 || pos>parry->count) {
			return false;
		}
		else {
			for (int i = pos; i <parry->count; i++) {
				parry->pbase[i - 1] = parry->pbase[i];


			}
		}parry->count--;
	
	
	}
	bool inversion(a* parry) {
		int i;
		int j;
		for (i = parry->pbase[parry->count - 1]; i >= 0; i--) {
			 j = parry->pbase[i];
			for (i - 1; i >= 0; i--) {
				parry->pbase[i] = parry->pbase[i - 1];

			}parry->pbase[0] = j;
		}
		return true;
	}*/