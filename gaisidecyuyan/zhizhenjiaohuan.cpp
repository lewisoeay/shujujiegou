/*#include<stdio.h>
void change(void* a, void* b, int len);
int main() {
	int a = 30, b = 40;
	int* p1 = &a;
	int* p2 = &b;
	void* p3 = p1;
	void* p4 = p2;
	change(p3, p4, 4);
	printf("a=%d b=%d", a, b);






	return 0;
}
void change(void* a, void* b, int len) {
	char* a1 = (char*)a;
	char* b1= (char*)b;
	char temp = 0;
	for (int i = 1; i < len; i++) {
	temp =*a1;
	*a1 = *b1;
	*b1 = temp;
	a1++, b1++;

	
	
	}



}*/