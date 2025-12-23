/*#include<stdio.h>
int main() {
	int num; int count = 0;
	while (1) {
		printf("请输入一个数");
		scanf("%d", &num);
		if (num < 3) {
			printf("请输入大于2的数！");
			continue;
		}if (num > 3) {
			count = 0;
			for (int j = 2; j <= num; j++) {
				int ss = 1;//循环内定义因为每一次循环都要重置ss的值
				for (int i = 2; i < j; i++) {
					if (j % i == 0) {
						ss = 0;
						break;
					}
				}if (ss) {
						count++;
					}
				
			}printf("%d", count);//在循环外输出
		
		}
}
	return 0;
}*/