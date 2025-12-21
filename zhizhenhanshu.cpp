/*#include<stdio.h>
#include<string.h>
int main() {
	const char* yonghumin = "wuhaoyu";
	const char* mima = "431086";
	int count = 0;
	while (count<=3) {
		printf("请输入用户名；");
		char neirong1[100];
		scanf_s("%s", neirong1,100);

		printf("请输入密码；");
		char neirong2[100];
		scanf_s("%s", neirong2,100);
		if (strcmp(yonghumin, neirong1) == 0 && strcmp(mima, neirong2) == 0) {
			printf("用户名和密码正确，成功登入。");
			break;
		}
		else {
			printf("密码或用户名错误，请重试，3次机会。");
			count++;
			continue;
		}
      }
return 0;
}*/