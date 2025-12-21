/*#include<stdio.h>
int main() {
	int dui = 0, month = 1, xdui = 1, num = 1;
	while (num <= 100) {

		int new_xdui = dui;
		int new_dui = dui + xdui;
		int new_num = new_dui + new_xdui;
		dui = new_dui;
		xdui = new_xdui;
		num = new_num;
		month++;
	}
		printf("%d", month);//这个太几把难了
	
	return 0;
}*/
/*#include<stdio.h>
int main() {
	int n;
	while (1) {
		printf("请输入一个数字");
		scanf("%d", &n);
		if (n < 1) {
			printf("请输入大于一的数！");
			continue;
		}if (n > 1) {
			int ss = 1;//定义在for外面
			for (int i = 2; i < n; i++) {
			if (n % i == 0) {
					ss = 0;
					break;

				}
			}if (ss) {
				printf("你输入的是一个素数");
				break;
			}
			else { printf("你输入的不是素数"); }
				}

	}
	return 0;
}*/