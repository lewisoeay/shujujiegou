/*#include<stdio.h>
int main() {
	printf("请输入一串字符；");
	char str[100];
	scanf_s("%s", str, 100);
	int count1 = 0, count2 =0;
	char* p = str;//不能放在循环否则每次都会重置
	while (1) {
	
		char c = *p;
		if (c > 90) {
			count1++;
		}
		else if (c < 90) {
			count2++;
		}
		if (c == '\0') { break; }p++;
	}printf("%d %d", count1, count2);

return 0;
}*/