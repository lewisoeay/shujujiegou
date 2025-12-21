/*#include<stdio.h>
int jiafa(int num1, int num2);
int jianfa(int num1, int num2);
int chenfa(int num1, int num2);
int chufa(int num1, int num2);
int main() {
	int num1,num2,c;
	printf("请输入两个数字");
	scanf_s("%d %d", &num1,& num2);
	int(*arr[4])(int, int) = { jiafa,jianfa,chenfa,chufa };
	printf("请输入一个数字表示运算规则");
	scanf_s("%d", &c);
	int res = arr[c - 1](num1, num2);
	printf("%d", res);




	return 0;
}int jiafa(int num1,int num2) {
	 
	 return num1 + num2;
}
int jianfa(int num1, int num2) {
	
	return num1 -num2;
}
int chenfa(int num1, int num2) {
	
	return num1 * num2;
}
int chufa(int num1, int num2) {
	
	return num1 / num2;
}
*/